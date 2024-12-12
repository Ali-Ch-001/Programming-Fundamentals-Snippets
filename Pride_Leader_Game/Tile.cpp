#include "Tile.h"

using namespace std;

Tile::Tile() : color('G'), name("Regular") {
}

Tile::Tile(char colorCode, string tileName)
    : color(colorCode), name(tileName) {
}