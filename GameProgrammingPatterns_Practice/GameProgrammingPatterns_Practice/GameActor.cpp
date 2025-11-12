#include "GameActor.h"
#include "Command.h"
#include "InputHandler.h"

#include <iostream>


GameActor::GameActor(InputHandler* inputHandler)
{
	this->inputHandler = inputHandler;
	x = 0;
}


// Called every frame to execute the player's inputs
void GameActor::Update()
{
	Command* command = inputHandler->HandleInput();
	if(command != nullptr) command->Execute(*this);

	Command* undoCommand = inputHandler->HandleUndo();
	if (undoCommand != nullptr) undoCommand->Undo(*this);
}


void GameActor::Jump()
{
	std::cout << "Jumped !" << std::endl;
}

void GameActor::CancelJump()
{
	std::cout << "Canceled jump" << std::endl;
}


void GameActor::Move(int addedX)
{
	x += addedX;
	std::cout << "Player's x coordinate : " << x << std::endl;
}
