#pragma once

class GameLoop {

public :
	GameLoop() {}
	~GameLoop() {}
	void DoGameLoop();

private :
	void ProcessInputs();
	void Updates(float deltaTime);
	void Renders();
};