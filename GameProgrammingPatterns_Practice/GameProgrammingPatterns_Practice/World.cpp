#include "World.h"

#include <cstdlib>  
#include <ctime>    


World::World()
{
    landTerrain = Terrain(1, false, false);
    trapTerrain = Terrain(2, true, false);
    mountainTerrain = Terrain(5, false, true);
}

World::~World()
{

}


void World::GenerateTilesTerrain()
{
    srand(time(0));

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            int tileIndex = y * HEIGHT + x;
            int terrainIndex = rand() % 3;    

            switch (terrainIndex) {
            case 0:
                terrainPerTiles[tileIndex] = &landTerrain;
                break;

            case 1:
                terrainPerTiles[tileIndex] = &trapTerrain;
                break;

            case 2:
                terrainPerTiles[tileIndex] = &mountainTerrain;
                break;
            }
        }
    }
}

const Terrain& World::GetTileTerrain(int x, int y) const
{
    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) return Terrain();

    int index = y * WIDTH + x;
    return *terrainPerTiles[index];
}
