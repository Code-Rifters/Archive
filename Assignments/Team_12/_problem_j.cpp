//Aya Elalfy's code

#include <iostream>

using namespace std;

int main()
{

   int a,b;
   cin>>a>>b;
   int *num1,*num2,temp;
   num1=&a;
   num2=&b;
   temp=*num1;
   *num1=*num2;
   *num2=temp;
   cout<<a<<" "<<b;

}
