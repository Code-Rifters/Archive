// Amira Haasan
#include <iostream>
#include "Team.h"
#include <string>
using namespace std;
int main()
{
    Team firstMember("Amira");
    firstMember.age = 20;
    firstMember.setExperience(4);
    cout << "Age : " << firstMember.age << endl;
    cout << "Experience : " << firstMember.getExperience() << endl;
    cout << "\t#########################" << endl;
    Team secondMember("Alaa");
    secondMember.age = 19;
    secondMember.setExperience(4);
    cout << "Age : " << secondMember.age << endl;
    cout << "Experience : " << secondMember.getExperience() << endl;
    cout << "\t#########################" << endl;
    Team thirdMember("Moataz");
    thirdMember.age = 19;
    thirdMember.setExperience(3);
    cout << "Age : " << thirdMember.age << endl;
    cout << "Experience : " << thirdMember.getExperience() << endl;
    cout << "\t#########################" << endl;
    Team fourthMember("Kareem");
    fourthMember.age = 19;
    fourthMember.setExperience(3);
    cout << "Age : " << fourthMember.age << endl;
    cout << "Experience : " << fourthMember.getExperience() << endl;
    cout << "\t#########################" << endl;

    cout << "Average of experience : " << secondMember.average() << endl << endl;
    return 0;
}
