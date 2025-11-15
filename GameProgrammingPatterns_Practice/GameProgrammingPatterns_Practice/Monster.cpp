#include "Monster.h"

Monster* Ghost::Clone()
{
    return new Ghost(health, speed);
}
