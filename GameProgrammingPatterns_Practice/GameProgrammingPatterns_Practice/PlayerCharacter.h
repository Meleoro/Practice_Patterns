#pragma once

class ControllerState;


class PlayerCharacter {
public : 
	PlayerCharacter();
	~PlayerCharacter();

	void HandleInput();
	void Update();
	void SetVelocity(float x, float y);

private :
	float velocityX, velocityY;
	ControllerState* currentState;

};