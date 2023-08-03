//Aya Elalfy's code

#include <iostream>
using namespace std;
int main()
{
   int size;

   cin>>size;
   long long arr[size];
   for(int i=0;i<size;i++)
      cin>>arr[i];
   for(int i=0;i<size;i++)
   {
      if(arr[i]==0)
         cout<<"1"<<endl;
      else{
         int fact=1;
         int j=1;
         while(j<=arr[i]){
            fact=fact*j;
            j++;
         }
         cout<<fact<<endl;
      }
   }
}
