#include <bits/stdc++.h>
using namespace std;
int main() {
    char cube[6][9],color;
    int counter=0;
    for(int i=0; i<6; i++) {
        for(int j=0; j<9; j++) {
            cin >> cube[i][j];
        }
    }
    cin>>color;
    for(int i=0; i<6; i++) {
        for(int j=0; j<9; j++) {
            if(cube[i][j]==color) {
                counter++;
            }
        }
        cout<<counter<<endl;
        counter=0;
    }
}
