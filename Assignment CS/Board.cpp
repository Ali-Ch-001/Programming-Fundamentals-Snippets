#include "Board.h"
#include <iostream>
#include <cstdlib>

using namespace std;

#define RED     "\033[48;2;230;10;10m"
#define GREEN   "\033[48;2;34;139;34m"
#define BLUE    "\033[48;2;10;10;230m"
#define PINK    "\033[48;2;255;105;180m"
#define BROWN   "\033[48;2;139;69;19m"
#define PURPLE  "\033[48;2;128;0;128m"
#define ORANGE  "\033[48;2;230;115;0m"
#define GREY    "\033[48;2;128;128;128m"
#define RESET   "\033[0m"

Board::Board(int count) : playerCount(count) {
    if (playerCount > MAX_PLAYERS) {
        playerCount = MAX_PLAYERS;
    }
    playerPositions.resize(playerCount, 0);
    playerLanes.resize(playerCount, 0);
    tiles.resize(2, vector<Tile>(BOARD_SIZE));
}

void Board::initializeBoard() {
    for (int i = 0; i < 2; ++i) {
        initializeTiles(i);
    }
}

void Board::initializeTiles(int laneIndex) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        tiles[laneIndex][i] = Tile('G', "Regular");
    }
    // Place special tiles at random positions
    for (int i = 0; i < 20; ++i) {
        int pos = rand() % (BOARD_SIZE - 2) + 1;
        char tileTypes[] = {'B', 'P', 'R', 'N', 'U'};
        string tileNames[] = {"Oasis", "Counseling", "Graveyard", "Hyenas", "Challenge"};
        int typeIndex = rand() % 5;
        tiles[laneIndex][pos] = Tile(tileTypes[typeIndex], tileNames[typeIndex]);
    }
    tiles[laneIndex][0] = Tile('Y', "Start");
    tiles[laneIndex][BOARD_SIZE - 1] = Tile('O', "Pride Rock");
}

bool Board::movePlayer(int playerIndex, int steps) {
    playerPositions[playerIndex] += steps;
    if (playerPositions[playerIndex] >= BOARD_SIZE - 1) {
        playerPositions[playerIndex] = BOARD_SIZE - 1;
        return true;
    } else if (playerPositions[playerIndex] < 0) {
        playerPositions[playerIndex] = 0;
    }
    return false;
}

int Board::getPlayerPosition(int playerIndex) const {
    return playerPositions[playerIndex];
}

int Board::getPlayerLane(int playerIndex) const {
    return playerLanes[playerIndex];
}

void Board::setPlayerLane(int playerIndex, int laneIndex) {
    playerLanes[playerIndex] = laneIndex;
}

Tile Board::getCurrentTile(int playerIndex) const {
    int lane = getPlayerLane(playerIndex);
    int pos = getPlayerPosition(playerIndex);
    return tiles[lane][pos];
}

void Board::displayTile(int laneIndex, int pos) const {
    string colorCode;
    char colorChar = tiles[laneIndex][pos].color;
    switch (colorChar) {
        case 'R': colorCode = RED; break;
        case 'G': colorCode = GREEN; break;
        case 'B': colorCode = BLUE; break;
        case 'U': colorCode = PURPLE; break;
        case 'N': colorCode = BROWN; break;
        case 'P': colorCode = PINK; break;
        case 'O': colorCode = ORANGE; break;
        case 'Y': colorCode = GREY; break;
        default: colorCode = RESET; break;
    }

    string displayChar = " ";

    for (int i = 0; i < playerCount; ++i) {
        if (playerLanes[i] == laneIndex && playerPositions[i] == pos) {
            displayChar = to_string(i + 1);
            break;
        }
    }

    cout << colorCode << "[" << displayChar << "]" << RESET;
}

void Board::displayTrack(int laneIndex) const {
    cout << "Lane " << laneIndex + 1 << ": ";
    for (int i = 0; i < BOARD_SIZE; ++i) {
        displayTile(laneIndex, i);
    }
    cout << endl;
}

void Board::displayBoard() const {
    for (int i = 0; i < 2; ++i) {
        displayTrack(i);
    }
}