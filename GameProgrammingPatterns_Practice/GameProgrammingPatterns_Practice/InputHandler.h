#pragma once

#include <stack>

class Command;

class InputHandler {
public :
	InputHandler();
	~InputHandler() {}
	Command* HandleInput();
	Command* HandleUndo();

private :
	Command* spaceCommand;
	Command* leftArrowCommand;
	Command* rightArrowCommand;
	int currentKey;

	std::stack<Command*> commandStack;
};