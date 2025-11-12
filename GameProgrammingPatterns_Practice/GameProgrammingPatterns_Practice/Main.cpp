// GameProgrammingPatterns_Practice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "GameActor.h" 
#include "InputHandler.h" 

#include "World.h"

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


int main() {
    //CommandTestLoop();
    FlyweightTest();
}
