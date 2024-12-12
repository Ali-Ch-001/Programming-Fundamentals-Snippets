#ifndef TILE_H
#define TILE_H

#include <string>

using namespace std;

class Tile {
public:
    char color;
    string name;
    Tile();
    Tile(char colorCode, string tileName);
};

#endif