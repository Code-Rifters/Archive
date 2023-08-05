//Amira Hassan
#include <iostream>
#include <string>
#include "Team.h"
int Team::numberOfMembers = 0;
double Team::avgExperience = 0.00;
using namespace std;
    Team::Team(string m_n)
    {
        membersName = m_n;
        numberOfMembers++;
        cout << membersName << " has joined the team" << endl;
    }
    Team::~Team()
    {
        cout << membersName << " has left the team" << endl;
    }
    void Team::setExperience(int exp)
    {
        experience = exp;
        avgExperience += experience;
    }
    int Team::getExperience()
    {
        return experience;
    }
    double Team::average()
    {
        return (avgExperience)/(numberOfMembers);
    }
