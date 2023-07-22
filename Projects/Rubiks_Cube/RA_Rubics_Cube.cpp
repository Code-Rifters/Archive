//rehap abdelghany
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
   char arr[3][3],x;
   int v=0,k=0,i,j;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           cin>>arr[i][j];//take the inputs
       }
   }
   cin>>x;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
          if(arr[i][j]==x)
          {
              v=1; //the change statment to know when i will start to print the letters
          }
          if(v==1)
          {
              cout<<arr[i][j];
              k++; //count the letters i printed
          }
       }
       cout<<endl;
   }
   cout<<k;


}
