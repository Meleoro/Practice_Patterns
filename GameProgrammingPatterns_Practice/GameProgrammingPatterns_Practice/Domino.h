#pragma once



class Domino {

public :
	void SetPrevious(Domino* domino) { previous = domino; }
	void Push() { nextPushed = true; }
	bool IsPushed() { return currentPushed; }

	void Update();
	void Swap();

private :
	bool currentPushed;
	bool nextPushed;
	Domino* previous;
};