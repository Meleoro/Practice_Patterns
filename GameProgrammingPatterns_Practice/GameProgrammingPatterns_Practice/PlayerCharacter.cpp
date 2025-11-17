#include "PlayerCharacter.h"
#include "States.h"
#include <conio.h>


PlayerCharacter::PlayerCharacter()
{
	currentState = (ControllerState*)(new IdleState());
}


PlayerCharacter::~PlayerCharacter()
{
	delete currentState;
}


void PlayerCharacter::SetVelocity(float x, float y)
{
	velocityX = x;
	velocityY = y;
}


void PlayerCharacter::HandleInput()
{
	if (_kbhit()) {
		int input = _getch();

		ControllerState* newState = currentState->HandleInput(*this, input);

		if (newState != nullptr)
		{
			currentState->ExitState(*this);
			delete currentState;

			currentState = newState;
			currentState->EnterState(*this);
		}
	}
}

void PlayerCharacter::Update()
{
	currentState->Update(*this);
}