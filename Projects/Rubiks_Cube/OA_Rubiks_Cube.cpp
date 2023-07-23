//Omar Ahmed
#include<bits/stdc++.h>
using namespace std;
int main(){
int t=1;
map<pair<char,int>,int>mp; string s;
while(t<=6){
int x=3;
while(x--){
cin>>s;
 for(int i=0;i<3;i++){
    mp[{s[i],t}]++;
 }
}
 t++;
 }
char c;cin>>c;
for(int x=1;x<=6;x++){
    cout<<mp[{c,x}]<<endl;
}

}
