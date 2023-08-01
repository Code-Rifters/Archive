// Yasmin Kamal
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x = s.find("101");
        int y = s.find("010");
        if(x==string::npos && y==string::npos)
            cout << "Bad\n";
        else
            cout << "Good\n";
    }
}
