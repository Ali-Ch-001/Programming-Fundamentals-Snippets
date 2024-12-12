#ifndef ADVISOR_H
#define ADVISOR_H

#include <string>

using namespace std;

class Advisor {
private:
    string name;
    string ability;

public:
    Advisor(string advisorName = "None", string advisorAbility = "None");

    string getName() const;
    string getAbility() const;
};

#endif