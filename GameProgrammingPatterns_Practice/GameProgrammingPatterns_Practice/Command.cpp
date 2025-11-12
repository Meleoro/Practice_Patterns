#include "Command.h"
#include "GameActor.h"


void JumpCommand::Execute(GameActor& gameActor)
{
	gameActor.Jump();
}

void JumpCommand::Undo(GameActor& gameActor)
{
	gameActor.CancelJump();
}


void MoveRightCommand::Execute(GameActor& gameActor)
{
	gameActor.Move(1);
}

void MoveRightCommand::Undo(GameActor& gameActor)
{
	gameActor.Move(-1);
}


void MoveLeftCommand::Execute(GameActor& gameActor)
{
	gameActor.Move(-1);
}

void MoveLeftCommand::Undo(GameActor& gameActor)
{
	gameActor.Move(1);
}

