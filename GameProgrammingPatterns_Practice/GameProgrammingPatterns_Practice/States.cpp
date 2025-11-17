#include "States.h"
#include "PlayerCharacter.h"
#include <iostream>


#pragma region Idle State

void IdleState::EnterState(PlayerCharacter& player)
{

}

void IdleState::ExitState(PlayerCharacter& player)
{

}

ControllerState* IdleState::HandleInput(PlayerCharacter& player, int input)
{
	switch (input) {
	case 80:    // Down Arrow
		return (ControllerState*)(new CrouchedState());
	}

	return nullptr;
}

void IdleState::Update(PlayerCharacter& player)
{
	std::cout << "Is Doing nothing" << std::endl;
}

#pragma endregion


#pragma region Crouched State

void CrouchedState::EnterState(PlayerCharacter& player)
{
	std::cout << "Started to crouch" << std::endl;
}

void CrouchedState::ExitState(PlayerCharacter& player)
{
	std::cout << "Stopped to crouch" << std::endl;
}

ControllerState* CrouchedState::HandleInput(PlayerCharacter& player, int input)
{
	if (input != 80)    // If we release the down arrow
		return (ControllerState*)(new IdleState());

	return nullptr;
}

void CrouchedState::Update(PlayerCharacter& player)
{
	std::cout << "Crouching" << std::endl;
}

#pragma endregion