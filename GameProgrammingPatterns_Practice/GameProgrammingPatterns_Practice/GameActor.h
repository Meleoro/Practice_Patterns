#pragma once

class InputHandler;

class GameActor {
public : 
	GameActor(InputHandler* inputHandler);
	~GameActor() {};

	void Jump();
	void CancelJump();
	void Move(int addedX);
	void Update();

private :
	int x;
	InputHandler* inputHandler;
};