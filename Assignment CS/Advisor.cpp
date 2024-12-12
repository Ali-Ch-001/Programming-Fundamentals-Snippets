#include "Advisor.h"

using namespace std;

Advisor::Advisor(string advisorName, string advisorAbility)
    : name(advisorName), ability(advisorAbility) {
}

string Advisor::getName() const {
    return name;
}

string Advisor::getAbility() const {
    return ability;
}