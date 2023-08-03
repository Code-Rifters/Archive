//lamoro's code

#include <bits/stdc++.h>
#define PI 3.14159265359
typedef long long ll;
typedef double du;
using namespace std;

int main(){
   string s;
   getline(cin, s);
   for (int i = 0; i < s.length(); i++)
      if(s[i] >= 'a' && s[i] <= 'z')s[i]-=32;
   cout<<s<<'\n';
}
