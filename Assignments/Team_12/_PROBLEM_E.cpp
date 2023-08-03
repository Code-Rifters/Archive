//lamoro's code

#include <bits/stdc++.h>
#define PI 3.14159265359
typedef long long ll;
typedef double du;
using namespace std;

int main(){
   ll cnt = 0;
   string s;
   getline(cin, s);
   s = ' '+s;
   for (int i = 0; i < s.length()-1; i++)
      if((s[i]==' ' || s[i]=='.' || s[i]=='!' || s[i]=='?') && ((s[i+1]>='a' && s[i+1]<='z') || (s[i+1]>='A' && s[i+1]<='Z'))) cnt++;
   cout<<cnt<<"\n";
}
