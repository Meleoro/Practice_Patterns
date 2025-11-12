#pragma once

class GameActor;

class Command {
public :
	virtual ~Command() {};
	virtual void Execute(GameActor& gameActor) = 0;
	virtual void Undo(GameActor& gameActor) = 0;
};


class JumpCommand : public Command {
	virtual void Execute(GameActor& gameActor) override;
	virtual void Undo(GameActor& gameActor) override;
};


class MoveRightCommand : public Command {
	virtual void Execute(GameActor& gameActor) override;
	virtual void Undo(GameActor& gameActor) override;
};


class MoveLeftCommand : public Command {
	virtual void Execute(GameActor& gameActor) override;
	virtual void Undo(GameActor& gameActor) override;
};