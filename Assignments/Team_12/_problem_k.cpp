//Aya Elalfy's code

#include <iostream>

using namespace std;

int main()
{

   int size,arr[size];
   int *ptr;
   ptr=arr;
   cin>>size;
   for(int i=0;i<size;i++){
      cin>>arr[i];
      ptr++;
   }
   ptr=&arr[size-1];
   for(int i=size-1;i>=0;i--){
      cout<<*ptr;
      ptr--;
   }
}
