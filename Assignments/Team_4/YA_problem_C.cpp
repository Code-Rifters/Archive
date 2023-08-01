// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int a[6] = {1, 2, 3, 4, 5};

int main(){
    
    for (int i = 0; i < 5; i++)
    {
       cout <<a[i] << ' '; // ptint the array before insertion
    }

    cout << '\n';

    int x , y;
    cin >> x >> y;

    /* this loop will shift right all index until it founds yth in array
    it will insert x in yth index and break the loop*/

    for (int i = 5 ; i >= 0; i--)
    {
        if(i == y)
        {
            a[i] = x;
            break;
        }
        a[i] = a[i-1];
    }
    
    for (int i = 0; i < 6; i++)
    {
       cout <<a[i] << ' ';
    }
    return 0;

}
