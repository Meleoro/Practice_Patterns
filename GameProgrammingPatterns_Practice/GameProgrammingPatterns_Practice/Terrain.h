#pragma once

class Terrain {
public :
	Terrain();
	Terrain(int startMoveCost, bool startIsTrapped, bool startIsBlocked);
	~Terrain() {};

	int GetMoveCost();
	bool GetIsTrapped();
	bool GetIsBlocked();

private :
	int moveCost;
	bool isTrapped;
	bool isBlocked;
};