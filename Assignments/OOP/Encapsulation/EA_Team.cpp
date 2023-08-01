// team.h 
#ifndef TEAMS _H
#define TEAMS _H


class teams
{
    public:
        teams ();
        virtual ~teams ();

    protected:

    private:
};

#endif // TEAMS _H
//team.cpp 
#ifndef TEAMS _H
#define TEAMS _H


class teams
{
    public:
        teams ();
        virtual ~teams ();

    protected:

    private:
};

#endif // TEAMS _H
// main.cpp
#include <iostream>
#include <string>

using namespace std;
class Team{
public:
     int exp;
    string name;

    Team(string Name,int Exp){
        name=Name;
        exp=Exp;
       cout<<Name<<" has joined the team"<<endl;
       }

    void average(int x,int y,int z,int d){
        cout<<(x+y+z+d)/4.0<<endl;
    }
~Team(){
    cout<<name<<" has left the team"<<endl;
}
    };

int main()
{ string name;
int experience;

  cout<< "Enter Member1's name And his Experiences : "<<endl;
    cin >> name>>experience;
    Team member1(name,experience);

   cout<< "Enter Member2's name And his Experiences : "<<endl;
    cin >> name>>experience;
    Team member2(name,experience);

    cout<< "Enter Member3's name And his Experiences : "<<endl;
    cin >> name>>experience;
    Team member3(name,experience);

    cout<< "Enter Member4's name And his Experiences : "<<endl;
    cin >> name>>experience;
    Team member4(name,experience);

    cout <<"The Average Of The Team Experience : ";
    member1.average(member1.exp,member2.exp,member3.exp,member4.exp);

    return 0;
}
