// rubik's cube.cpp : This file contains the 'main' function. Program execution begins and ends there.
//sama Haitham 

#include <iostream>
using namespace std;
int main()
{
    char cube[3][3]; 
    bool find = false; // Ast5dmtha 3shan a3rf atb3 el colors b3d keda
    int i,j, count = 0;// count 3shan y3dly 3dd el colors ely etb3t b3d ma l'ena el color
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++)
        {
            cin >> cube[i][j];
        }
    }
    char color;
    cin >> color;
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++)
        {
            if (cube[i][j] == color)
                find = true; 
            if (find == false) {
                cout << " ";
            }
            if (find) {
                count++;
                cout << cube[i][j];
            }
            
            
                
        }
        cout << endl;
    }
    cout << count;
  return 0;
}
