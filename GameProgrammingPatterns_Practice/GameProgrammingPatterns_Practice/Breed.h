#pragma once

class Breed {
public :
	Breed(int hlth, int strgth, float spd) : health(hlth), strength(strgth), speed(spd) {}

	int GetHealth() { return health; }
	int GetStrength() { return strength; }
	float GetSpeed() { return speed; }

private :
	int health, strength;
	float speed;
};