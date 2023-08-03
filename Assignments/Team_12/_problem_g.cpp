//Aya Elalfy's code

#include <iostream>
using namespace std;
int main()
{
    string arr;
    string str="";
    getline(cin,arr);
    int len=arr.length();
    for(int i=0;i<len;i++){
            if((arr[i]>='a'&&arr[i]<='z')||(arr[i]>='A'&&arr[i]<='Z')||(arr[i]==' '))
                str=str+arr[i];
                }
              cout<<str;
}
