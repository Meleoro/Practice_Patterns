#pragma once

class Monster
{
public:
    virtual ~Monster() {}
    virtual Monster* Clone() = 0;
};


class Ghost : public Monster
{
public:
    Ghost(int hlth, int spd) : health(hlth), speed(spd) {}
    virtual Monster* Clone() override;

    int Health() { return health; }
    int Speed() { return speed; }

private:
    int health;
    int speed;
};
