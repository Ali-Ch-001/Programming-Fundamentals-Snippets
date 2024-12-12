#ifndef BOARD_H
#define BOARD_H

#include "Tile.h"
#include <vector>

using namespace std;

class Board {
private:
    static const int BOARD_SIZE = 52;
    static const int MAX_PLAYERS = 2;
    int playerCount;
    vector<vector<Tile>> tiles;
    vector<int> playerPositions;
    vector<int> playerLanes;
    void initializeTiles(int laneIndex);
    bool isPlayerOnTile(int playerIndex, int pos, int laneIndex) const;
    void displayTile(int laneIndex, int pos) const;

public:
    Board(int count = 2);
    void initializeBoard();
    void displayTrack(int laneIndex) const;
    void displayBoard() const;
    bool movePlayer(int playerIndex, int steps);
    int getPlayerPosition(int playerIndex) const;
    int getPlayerLane(int playerIndex) const;
    Tile getCurrentTile(int playerIndex) const;
    void setPlayerLane(int playerIndex, int laneIndex);
};

#endif 