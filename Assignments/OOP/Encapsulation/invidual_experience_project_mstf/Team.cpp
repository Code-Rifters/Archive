#include<iostream>
#include<string>
using namespace std;
class team{
    private:
    string name;
    int age;
    int experience;
    public:
    team(string na,int alt,int exp){
        name =na;
        age =alt;
        experience= exp;
        cout<<"welcome to the team "<<name<<endl;
        static int sum=0;
        static float counter=0;
        counter++;
        sum+=exp;
    if(counter==4){
        cout<<"the average of team's experiences equals "<<sum/counter<<endl;
    }

    }
    ~team(){
        cout<<name<<" left the team"<<endl;
    }
};
int main(){
  for (int i = 0; i < 4; i++)
  {
    cout<<"enter your name ,age and experience"<<endl;
    string name;int age,exp;
    cin>>name>>age>>exp;
    team member(name,age,exp);
  }
  
}