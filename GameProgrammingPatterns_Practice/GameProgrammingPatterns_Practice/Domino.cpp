#include "Domino.h"

void Domino::Update() {
	if (previous->IsPushed()) {
		nextPushed = true;
	}
}

void Domino::Swap()
{
	currentPushed = nextPushed;
}

