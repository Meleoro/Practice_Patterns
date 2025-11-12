#pragma once

#include "Terrain.h"

class World {
public :
	World();
	~World();

	void GenerateTilesTerrain();
	const Terrain& GetTileTerrain(int x, int y) const;

private :
	const static int WIDTH = 10;
	const static int HEIGHT = 10;

	Terrain landTerrain;
	Terrain trapTerrain;
	Terrain mountainTerrain;

	Terrain* terrainPerTiles[WIDTH * HEIGHT];
};