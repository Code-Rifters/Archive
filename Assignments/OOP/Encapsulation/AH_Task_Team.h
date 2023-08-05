// Amira Hassan
#ifndef TEAM_H_INCLUDED
#define TEAM_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;
class Team
{
private:
    string membersName;
    int experience;
    static int numberOfMembers;
public:
    static double avgExperience;
    int age;
    Team(string m_n);
    ~Team();
    double average();
    void setExperience(int exp);
    int getExperience();
};
#endif // TEAM_H_INCLUDED
