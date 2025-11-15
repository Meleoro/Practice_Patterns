#include "Spawner.h"
#include "Monster.h"

Monster* Spawner::SpawnMonster()
{
    return prototype->Clone();
}
