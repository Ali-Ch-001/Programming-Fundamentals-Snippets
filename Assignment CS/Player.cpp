#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(string playerName, int playerAge)
    : name(playerName), age(playerAge), pridePoints(20000), stamina(100), strength(100), wisdom(100) {
}

string Player::getName() const {
    return name;
}

int Player::getAge() const {
    return age;
}

int Player::getPridePoints() const {
    return pridePoints;
}

int Player::getStamina() const {
    return stamina;
}

int Player::getStrength() const {
    return strength;
}

int Player::getWisdom() const {
    return wisdom;
}

Advisor Player::getAdvisor() const {
    return advisor;
}

void Player::addPridePoints(int points) {
    pridePoints += points;
    if (pridePoints < 0) {
        pridePoints = 0;
    }
}

void Player::addStamina(int points) {
    stamina += points;
    if (stamina < 100) {
        stamina = 100;
    }
}

void Player::addStrength(int points) {
    strength += points;
    if (strength < 100) {
        strength = 100;
    }
}

void Player::addWisdom(int points) {
    wisdom += points;
    if (wisdom < 100) {
        wisdom = 100;
    }
}

void Player::setAdvisor(Advisor newAdvisor) {
    advisor = newAdvisor;
}

void Player::displayStats() const {
    cout << "^^^^^^^^^^" << endl;
    cout << name << ", age " << age << endl;
    cout << "Strength: " << strength << endl;
    cout << "Stamina: " << stamina << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Pride Points: " << pridePoints << endl << endl;
    cout << "^^^^^^^^^^" << endl;
}

void Player::applyTrainingPath() {
    addPridePoints(-5000);
    addStamina(500);
    addStrength(500);
    addWisdom(1000);
}

void Player::applyPrideLandsPath() {
    addPridePoints(5000);
    addStamina(200);
    addStrength(200);
    addWisdom(200);
}