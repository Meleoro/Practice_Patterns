#pragma once

class Monster;

class Spawner
{
public:
    Spawner(Monster* proto) : prototype(proto) {}
    Monster* SpawnMonster();


private:
    Monster* prototype;
};