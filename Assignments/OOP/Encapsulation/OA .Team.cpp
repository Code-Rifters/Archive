//Omar Ahmed
//header file
#ifndef TEAM_H
#define TEAM_H
#include<bits/stdc++.h>
using namespace std;

class Team
{
string name;
int age;
int exp;
int sum2;
public:
Team(string n);
string getname();
void setage(int a);
int getage();
void setexp(int b);
int getexp();
~Team();


};
#endif
//Team.cpp
#include "Team.h"
#include<bits/stdc++.h>
using namespace std;

Team:: Team(string n){
    name=n;
cout<<name<<" in Team"<<endl;
}
string Team::getname(){
return name;
}
void Team:: setage(int a){
age=a;
}
int Team::getage(){
return age;
}
void Team:: setexp(int a){
if(a>=1&&a<=4){
  exp=a;
static int sum=0;
sum+=exp;
sum2=sum;
}
else{
 static int b=4;

if(--b)
    {

cout<<"Not Valid "<<endl;
cout<<"you have try "<<b<<" times"<<endl;
cout<<"enter your exp from 1 to 4"<<endl;
cin>>a;
setexp(a);
}
else{

exp=0;

}

}


}
int Team:: getexp(){
    if(exp==0)
return -1;
    else
return exp;
}
Team:: ~Team(){

cout<<name<<" leave the team"<<endl;
static int c=0;
c++;
if(c==4)
    cout<<"ave exp of the team = "<<(double)sum2/4<<endl;

}
//main file
#include<bits/stdc++.h>
#include "Team.h"
using namespace std;

int main()
{
for(int y=1;y<=4;y++){
cout<<"enter your name member no "<<y<<endl;
string s;int x;
cin>>s;
Team member(s);
cout<<"enter your age"<<endl;
cin>>x;
member.setage(x);
cout<<"enter your exp from 1 to 4"<<endl;
cin>>x;
member.setexp(x);
cout<<"welcome "<<member.getname()<<endl;
cout<<"the age is "<<member.getage()<<endl;
if(member.getexp()>=1&&member.getexp()<=4)
cout<<"the exp is "<<member.getexp()<<endl;
else{
    cout<<"sorry the exp is out of range"<<endl;
}

}

}
