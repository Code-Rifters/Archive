//menna esmat
#include <iostream>
#define faces 6 //numbers of faces
#define rows 3 //numbers of rows
#define columns 3 //numbers of columns
using namespace std;
int main() {
    char rubiks_cube [faces][rows][columns]; //define 3D array of characters (R,W,B,O,G,Y)

    for(int i=0 ; i<faces ; i++){ //nested for loop to input 9 colors of each face (6 faces)
            cout<<"Enter the 9 colors of face number "<< i+1 <<" : "<<endl;

            for(int j=0;j<rows;j++){

                    for(int x=0 ; x<columns ; x++){

                            cin>>rubiks_cube[i][j][x];
                    }
            }

    }

    cout<<"Enter the color to know its appearance in each face : "<<endl;

    char specific_color;
    cin>> specific_color; // input specific color
    
    int count[faces]={0};

    for(int i=0 ; i<faces ; i++){ // nested for loop to count how many time this color appear.

            for(int j=0 ; j<rows ; j++){

                    for(int x=0 ; x<columns ; x++){

                            if(rubiks_cube[i][j][x]== specific_color){
                                count[i]++;
                            }
                    }
            }

    }
    cout<<"the appearance of "<<specific_color<<" : "<<endl;

    for(int i = 0; i<faces ; i++){
            cout<<"Face"<<i+1<<" : "<<count[i]<<endl;
    }

    return 0;
}
