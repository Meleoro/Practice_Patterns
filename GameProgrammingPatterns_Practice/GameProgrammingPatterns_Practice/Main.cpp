// GameProgrammingPatterns_Practice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "GameActor.h" 
#include "InputHandler.h" 
#include <iostream>

void CommandTestLoop() {
    GameActor* gameActor = new GameActor(new InputHandler());

    while (true) {
        gameActor->Update();
    }
}

int main() {
    CommandTestLoop();
}
