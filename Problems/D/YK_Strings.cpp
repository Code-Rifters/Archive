// Yasmin Kamal
#include <bits/stdc++.h>
using namespace std;
int main(){
    string a , b ;
    char d;
    cin>>a>>b;
    string c = a + b;
    cout<<a.size()<<' '<<b.size()<<endl;
    cout<<c<<endl;
    d=a[0];
    a[0]=b[0];
    b[0]=d;
    cout<<a<<' '<<b;
}
