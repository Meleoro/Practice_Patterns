// GameProgrammingPatterns_Practice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "GameActor.h" 
#include "InputHandler.h" 

#include "World.h"

#include "ObserverClassExample.h"
#include "SubjectClassExample.h"

#include "Monster.h"
#include "Spawner.h"

#include "RandomClass.h"
#include "FileSystem.h"

#include "PlayerCharacter.h"

#include "Domino.h"
#include <vector>

#include <iostream>



void CommandTestLoop() {
    GameActor* gameActor = new GameActor(new InputHandler());

    while (true) {
        gameActor->Update();
    }
}

void FlyweightTest() {
    World world = World();

    world.GenerateTilesTerrain();
    
    Terrain terrain = world.GetTileTerrain(1, 1);
    std::cout << terrain.GetMoveCost() << " " << terrain.GetIsTrapped() << " " << terrain.GetIsBlocked();
}

void ObserverTest() {
    SubjectClassExample* subject = new SubjectClassExample();
    ObserverClassExample* observer = new ObserverClassExample();

    subject->onSomethingHappened->AddObserver(observer);

    subject->DoSomething();
}

void PrototypeTest() {
    Ghost* prototype = new Ghost(10, 10);
    Spawner* ghostSpawner = new Spawner(prototype);

    Ghost* spawnedGhost = (Ghost*)(ghostSpawner->SpawnMonster());

    std::cout << spawnedGhost->Health() << std::endl;
}

void SingletonTest() {

    RandomClass* randomClass = new RandomClass();

    randomClass->DoStuff();
}


void StatesTest() {
    PlayerCharacter* player = new PlayerCharacter();

    while (true) {
        player->HandleInput();
        player->Update();
    }
}

void DoubleBufferTest() {
    Domino* domino1 = new Domino();
    Domino* domino2 = new Domino();
    Domino* domino3 = new Domino();

    domino1->SetPrevious(domino3);
    domino2->SetPrevious(domino1);
    domino3->SetPrevious(domino2);

    std::vector<Domino*> dominoes = { domino1, domino2, domino3 };
    domino1->Push();


    // To experiment with a Double Buffer, I wanted dominoes to do their behavior sequentially and 
    // the behavior to be the same for any loop directions (from A to Z and from Z to A)
    // So I used two buffers that I "swap" at the end of each frame 
    for (int i = 0; i < 3; i++) {

        for (int i = 0; i < dominoes.size(); i++) {
            dominoes[i]->Update();
        }

        for (int i = 0; i < dominoes.size(); i++) {
            dominoes[i]->Swap();
        }

        for (int i = 0; i < dominoes.size(); i++) {
            std::cout << "Domino " << i << " is " << (dominoes[i]->IsPushed() ? "Pushed" : "Standing") << "   ";
        }

        std::cout << std::endl;
    }
}


int main() {
    //CommandTestLoop();
    //FlyweightTest();
    //ObserverTest();
    //PrototypeTest();
    //SingletonTest();
    //StatesTest();

    DoubleBufferTest();
}
