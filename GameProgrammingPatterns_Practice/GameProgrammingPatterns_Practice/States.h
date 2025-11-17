#pragma once

class PlayerCharacter;

class ControllerState {
public :
	virtual ~ControllerState() {}

	virtual void EnterState(PlayerCharacter& player) = 0;
	virtual void ExitState(PlayerCharacter& player) = 0;

	virtual ControllerState* HandleInput(PlayerCharacter& player, int input) = 0;
	virtual void Update(PlayerCharacter& player) = 0;
};

class IdleState : ControllerState {
public : 
	virtual void EnterState(PlayerCharacter& player) override;
	virtual void ExitState(PlayerCharacter& player) override;

	virtual ControllerState* HandleInput(PlayerCharacter& player, int input) override;
	virtual void Update(PlayerCharacter& player) override;
};


class CrouchedState : ControllerState {
public:
	virtual void EnterState(PlayerCharacter& player) override;
	virtual void ExitState(PlayerCharacter& player) override;

	virtual ControllerState* HandleInput(PlayerCharacter& player, int input) override;
	virtual void Update(PlayerCharacter& player) override;
};