//Team.h
#include<iostream>
#include<bits/stdc++.h>
#ifndef TEAM_H
#define TEAM_H
using namespace std;
class Team
{private:
    string name;
    int age,exp,sum2;
public:
    Team (string n);
    ~Team ();
    string getName();
    void setAge(int a);
    void ave();
    int getAge();
    void setExp(int e);
    int getExp();

};

#endif // TEAM_H
//Team.cpp
#include "Team.h"
#include<bits/stdc++.h>
using namespace std;
Team::Team(string n){
    name=n;
cout<<name<<" in Team successfully"<<endl;
}
Team:: ~Team(){
static int c=0;
c++;
if(c==4)
    cout<<"The average of experience of the team is "<<(double)sum2/4<<endl;

}

string Team::getName(){
return name;
}
void Team::setAge(int a){
age=a;
}
int Team::getAge(){
return age;
}

void Team::setExp(int e){
if(e>=1 && e<=4){
    exp=e;
    static int sum;
    sum+=exp;
    sum2=sum;
}

else{
    cout<<"\nWrong experience input please enter it from 1 to 4"<<endl;
    cin>>e;
    exp=e;
}
}
int Team::getExp(){
return exp;
}
//main.cpp
#include <iostream>
#include <bits/stdc++.h>
#include<Team.h>
using namespace std;
int main()
{
cout<<"\t\t\t\t\tWelcome To our team has ID#14"<<endl;
string n;
int age,e;
for(int i=1;i<=4;i++){
cout<<"\nEnter Your name of member no."<<i<<" : ";
cin>>n;
cout<<"\nEnter Your age and your experience from(1 to 4) of member no."<<i<<" : ";
cin>>age>>e;
Team t(n);
t.setAge(age);
t.setExp(e);
cout<<"Your age is "<<t.getAge()<<endl;
cout<<"Your experience is "<<t.getExp()<<endl;

}
return 0;}
