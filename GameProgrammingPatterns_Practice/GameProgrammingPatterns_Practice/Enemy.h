#pragma once
#include "Breed.h"


class Enemy {
public :
	Enemy(Breed& enemyBreed) : breed(enemyBreed), currentHealth(enemyBreed.GetHealth()) {}

	int GetCurrentHealth() { return currentHealth; }
	int GetStrength() { return breed.GetStrength(); }
	float GetSpeed() { return breed.GetSpeed(); }
	int GetMaxHealth() { return breed.GetHealth(); }

private :
	int currentHealth;
	Breed& breed;
};