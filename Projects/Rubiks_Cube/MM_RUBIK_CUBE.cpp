// Made By Moataz Mamdouh
#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    cout<<"Welcome to rubiks cube project"<<endl;
    cout<<"choose 1 for input as whole "<<endl;
    cout<<"choose 2 for input each face "<<endl;
    int choice,first=0,second=0,third=0,fourth=0,fifth=0,sixth=0;
    char x,y,key;
    cin>>choice;
    if(choice==1){
        string rubiks;
        for(int i=0;i<54;i++){
            cin>>rubiks[i];
        }
        cout<<"enter colour to be searched for"<<endl;
        cin>>key;
        for(int i=0;i<9;i++){
            if(rubiks[i]==key){
                first++;
            }
        }
        for(int i=9;i<18;i++){
            if(rubiks[i]==key){
                second++;
            }
        }
        for(int i=18;i<27;i++){
            if(rubiks[i]==key){
                third++;
            }
        }
        for(int i=27;i<36;i++){
            if(rubiks[i]==key){
                fourth++;
            }
        }
        for(int i=36;i<45;i++){
            if(rubiks[i]==key){
                fifth++;
            }
        }
        for(int i=45;i<54;i++){
            if(rubiks[i]==key){
                sixth++;
            }
        }
        cout<<key<<" appeared "<<first<<"time in first face"<<endl;
        cout<<key<<" appeared "<<second<<"time in second face"<<endl;
        cout<<key<<" appeared "<<third<<"time in third face"<<endl;
        cout<<key<<" appeared "<<fourth<<"time in fourth face"<<endl;
        cout<<key<<" appeared "<<fifth<<"time in fifth face"<<endl;
        cout<<key<<" appeared "<<sixth<<"time in sixth face"<<endl;

    }
    else if(choice==2){
        string firstf,secondf,thirdf,fourthf,fifthf,sixthf;
        cout<<"enter first string"<<endl;
        for(int i=0;i<9;i++){
            cin>>firstf[i];
        }
        cout<<"enter second string"<<endl;
        for(int i=0;i<9;i++){
            cin>>secondf[i];
        }
        cout<<"enter third string"<<endl;
        for(int i=0;i<9;i++){
            cin>>thirdf[i];
        }
        cout<<"enter fourth string"<<endl;
        for(int i=0;i<9;i++){
            cin>>fourthf[i];
        }
        cout<<"enter fifth string"<<endl;
        for(int i=0;i<9;i++){
            cin>>fifthf[i];
        }
        cout<<"enter sixth string"<<endl;
        for(int i=0;i<9;i++){
            cin>>sixthf[i];
        }
        cout<<"enter colour to be searched for"<<endl;
        cin>>key;
        for(int i=0;i<9;i++){
            if(firstf[i]==key){
                first++;
            }
        }
        for(int i=0;i<9;i++){
            if(secondf[i]==key){
                second++;
            }
        }
        for(int i=0;i<9;i++){
            if(thirdf[i]==key){
                third++;
            }
        }
        for(int i=0;i<9;i++){
            if(fourthf[i]==key){
                fourth++;
            }
        }
        for(int i=0;i<9;i++){
            if(fifthf[i]==key){
                fifth++;
            }
        }
        for(int i=0;i<9;i++){
            if(sixthf[i]==key){
                sixth++;
            }
        }
        cout<<key<<" appeared "<<first<<"time in first face"<<endl;
        cout<<key<<" appeared "<<second<<"time in second face"<<endl;
        cout<<key<<" appeared "<<third<<"time in third face"<<endl;
        cout<<key<<" appeared "<<fourth<<"time in fourth face"<<endl;
        cout<<key<<" appeared "<<fifth<<"time in fifth face"<<endl;
        cout<<key<<" appeared "<<sixth<<"time in sixth face"<<endl;
    }
}
