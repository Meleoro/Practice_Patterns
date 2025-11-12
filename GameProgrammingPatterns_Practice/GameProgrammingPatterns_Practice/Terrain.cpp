#include "Terrain.h"

Terrain::Terrain() :
	moveCost(0), isTrapped(false), isBlocked(false)
{
}

Terrain::Terrain(int startMoveCost, bool startIsTrapped, bool startIsBlocked) :
	moveCost(startMoveCost), isTrapped(startIsTrapped), isBlocked(startIsBlocked)
{
}

int Terrain::GetMoveCost()
{
	return moveCost;
}

bool Terrain::GetIsTrapped()
{
	return isTrapped;
}

bool Terrain::GetIsBlocked()
{
	return isBlocked;
}


