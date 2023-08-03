//Aya Elalfy's code

#include <iostream>

using namespace std;
int fib(int x);
int main()
{
   int size;
   cin>>size;
   int arr[size];

   for(int i=0;i<size;i++)
      cin>>arr[i];
   for(int i=0;i<size;i++){
      int j=0;
      int sum=0;
      sum+=fib(arr[i]);
      cout<<sum;
      cout<<endl;
   }
}

int fib(int x){

if(x==0||x==1)
    return (x);
else
    return (fib(x-1)+fib(x-2));
}
