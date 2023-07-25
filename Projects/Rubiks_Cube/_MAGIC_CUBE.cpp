//lamoro's code
//You can check the problem through this link: https://codeforces.com/group/U14Fnis14R/contest/459153/problem/A
#include <bits/stdc++.h>
#define PI 3.14159265359
typedef long long ll;
typedef double du;
using namespace std;
char a[6][3][3];
int main()
{
   for (int i = 0; i < 6; i++)
      for (int j = 0; j < 3; j++)
         for (int m = 0; m < 3; m++)
            cin>>a[i][j][m];
   
   char k;cin>>k;
   for (int i = 0; i < 6; i++)
   {
      ll cnt=0;
      for (int j = 0; j < 3; j++)
         for (int m = 0; m < 3; m++)
            if(a[i][j][m]==k) cnt++; 
      cout<<cnt<<'\n';
   } 
}
