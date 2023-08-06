#include <iostream>
#define FIO ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

using namespace std;

class Team7
{
private:
    string name;
    int age;
    float experience;

public:

    Team7(string n) : name(n) {
        cout << name << " has joined the team" << endl;
    }


    ~Team7() {
        cout << name << " has left the team" << endl;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setExperience(float exp)
    {
        experience = exp;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    float getExperience()
    {
        return experience;
    }

    void member_info()
    {
        cout <<
        "Member name : " << name << '\n' <<
        "Member age  : " << age << '\n' <<
        "Member experience : " << experience << " years\n" << '\n';
    }
};

int main()
{
    //  FIO //Fast input output

    Team7 mohamed("Mohamed seif");
    mohamed.setAge(19);
    mohamed.setExperience(1);

    Team7 rehab("Rehab Abdelghany");
    rehab.setAge(19);
    rehab.setExperience(1.5);

    Team7 hosny("Hosny mohamed");
    hosny.setAge(19);
    hosny.setExperience(2);

    Team7 sama("Sama hitham");
    sama.setAge(19);
    sama.setExperience(3);

    cout << "\nchoose member's number to see all his information\n"
        << "1- Mohamed\n"
        << "2- Rehab\n"
        << "3- Hosny\n"
        << "4- Sama\n\n";

    int mem;
    float avgE = (mohamed.getExperience() + rehab.getExperience() + hosny.getExperience()+ sama.getExperience())/4;
    float avgA = (mohamed.getAge() + rehab.getAge() + hosny.getAge() + sama.getAge())/4;
    cin >> mem;
    switch (mem)
    {
    case 1:
        mohamed.member_info();
        break;
    case 2:
        rehab.member_info();
        break;
    case 3:
        hosny.member_info();
        break;
    case 4:
        sama.member_info();
        break;
    }

    cout << "Age average: " << avgA
         << "\nExperience average: "<< avgE << "years\n"
         << '\n';


    return (0);
}

