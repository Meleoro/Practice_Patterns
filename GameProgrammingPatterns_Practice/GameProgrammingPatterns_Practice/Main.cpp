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


int main() {
    //CommandTestLoop();
    //FlyweightTest();
    //ObserverTest();
    //PrototypeTest();

    SingletonTest();
}
