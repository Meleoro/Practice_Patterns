#include "InputHandler.h"
#include "Command.h"
#include <iostream>
#include <conio.h>



InputHandler::InputHandler()
{
    spaceCommand = new JumpCommand();
    leftArrowCommand = new MoveLeftCommand();
    rightArrowCommand = new MoveRightCommand();

    currentKey = 0;
}


// Returns the command to execute according to player's inputs
Command* InputHandler::HandleInput()
{
    currentKey = _getch(); 
    Command* returnedCommand = nullptr;

    switch (currentKey) {
        case 32:  // Space Input
            returnedCommand = spaceCommand;
            break;

        case 75:  // Left Arrow Input
            returnedCommand = leftArrowCommand;
            break;

        case 77:  // Right Arrow Input
            returnedCommand = rightArrowCommand;
            break;
    }

    if (returnedCommand != nullptr) {
        commandStack.push(returnedCommand);
    }

    return returnedCommand;
}


// Returns the command to undo if the player presses 'R'
Command* InputHandler::HandleUndo()
{
    if (commandStack.size() == 0) return nullptr;

    switch (currentKey) {
        case 114:     // 'R' Input
            Command* returnedCommand = commandStack.top();
            commandStack.pop();
            return returnedCommand;
    }

    return nullptr;
}
