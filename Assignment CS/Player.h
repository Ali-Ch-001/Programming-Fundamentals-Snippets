#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Advisor.h"

using namespace std;

class Player {
private:
    string name;
    int age;
    int pridePoints;
    int stamina;
    int strength;
    int wisdom;
    Advisor advisor;

public:
    Player(string playerName = "Player", int playerAge = 0);

    string getName() const;
    int getAge() const;
    int getPridePoints() const;
    int getStamina() const;
    int getStrength() const;
    int getWisdom() const;
    Advisor getAdvisor() const;

    void addPridePoints(int points);
    void addStamina(int points);
    void addStrength(int points);
    void addWisdom(int points);
    void setAdvisor(Advisor newAdvisor);
    void displayStats() const;
    void applyTrainingPath();
    void applyPrideLandsPath();
};

#endif