#include "teamclass.hpp"
#include <iostream>

using namespace std;

int main(){
    team Youssef ;
    Youssef.set_name("Youssef");
    Youssef.set_age(19);
    Youssef.set_experence(10);
    cout<<"Age : "<<Youssef.get_age()<<endl;
    cout<<"Name : "<<Youssef.get_name()<<endl;
    cout<<"Experience : "<<Youssef.get_experence()<<endl;

    team Rawan ;
    Rawan.set_name("Rawan");
    Rawan.set_age(19);
    Rawan.set_experence(10);
    cout<<"Age : "<<Rawan.get_age()<<endl;
    cout<<"Name : "<<Rawan.get_name()<<endl;
    cout<<"Experience : "<<Rawan.get_experence()<<endl;


    team Fatma ;
    Fatma.set_name("Fatma");
    Fatma.set_age(19);
    Fatma.set_experence(5);
    cout<<"Age : "<<Fatma.get_age()<<endl;
    cout<<"Name : "<<Fatma.get_name()<<endl;
    cout<<"Experience : "<<Fatma.get_experence()<<endl;

    team Seif ;
    Seif.set_name("Seif");
    Seif.set_age(19);
    Seif.set_experence(5);
    cout<<"Age : "<<Seif.get_age()<<endl;
    cout<<"Name : "<<Seif.get_name()<<endl;
    cout<<"Experience : "<<Seif.get_experence()<<endl;
    cout<<"The Average of Experience is : "<<(Seif.average()+Fatma.average()+Rawan.average()+Youssef.average())/4<<endl;
}
