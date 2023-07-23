// Youssef Amr 
#include<bits/stdc++.h>
using namespace std;

int main(){
    char cube[6][9];
    char color;
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the colors of face number " << i+1 <<'\n';
        for (int j = 0; j < 9; j++)
        {
            cin >> cube[i][j];
        }
    }
    cout << "Enter a color to search\n";
    cin >> color;
    
    for (int i = 0; i < 6; i++)
    {
        int ans = 0; 
        for (int j = 0; j < 9; j++)
        {
            if(color == cube[i][j])
                ans++;
        }
        cout <<"This color appears "<< ans << " times in face "<< i+1 <<'\n';
    }
    return 0;

}
