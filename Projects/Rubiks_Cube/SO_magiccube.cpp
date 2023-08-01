//SARA OMAR

#include <iostream>
using namespace std;
int main()
{
  /*I create a 3 dimensional array to take inputs of each array
     one step as the number in the first bracket represents number of arrays
     and the second and third ones represent rows and columns of each array*/
   char a[6][3][3];
   /*below i will use a for loop that include two loops inside it
   to take elements from user , the first one for number of arrays i want ,second for
   the rows of each array and the third is for the columns of each array*/
   for(int x =0 ; x<6 ; x++)
   {
       for(int i=0 ; i<3 ; i++)
       {
           for(int j=0 ; j<3 ; j++)
           {
               cin>>a[x][i][j];
           }
       }
   }

   char k;
    cin>>k;   // k for the colour i want to search about


    /* loop as same as the previous one but it is for searching for the
    required colour and count the times it is appeared on them*/

   int coun=0; //declaring the counter
   for(int x =0 ; x<6 ; x++)
   {
       for(int i=0 ; i<3 ; i++)
       {
           for(int j=0 ; j<3 ; j++)
           {
               if(k==a[x][i][j])
                coun++; //to count how many times the colour appeared
           }
       }
       cout<<coun<<endl;
       coun=0;  //this statement to count from the beggining to the next array
   }
 return 0;
}


