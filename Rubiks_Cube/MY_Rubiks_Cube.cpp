// Elazaz
#include <iostream>

using namespace std;

int main()
{
    const int NUM_FACES = 6;
    const int NUM_FIELDS = 9;
    char rubiksCube[NUM_FACES][NUM_FIELDS];
    // Taking colors of Rubik's Cube 
    for (int face = 0; face < NUM_FACES; face++)
    {
        cout << "Enter the colors for face" << face + 1 << " : ";
        for (int field = 0; field < NUM_FIELDS; field++)
        {
            cin >> rubiksCube[face][field];
        }
    }
    // Taking a color from the user
    char userColor;
    cout << "Enter a color to check its occurrence: ";
    cin >> userColor;
    // Counting the occurrence of the user's color on each face
    int colorCount[NUM_FACES] = {0};
    for (int face = 0; face < NUM_FACES; face++)
    {
        for (int field = 0; field < NUM_FIELDS; field++)
        {
            if (rubiksCube[face][field] == userColor)
            {
                colorCount[face]++;
            }
        }
    }
    // Outputting the occurrence of the user's color on each face
    cout << "Occurrences of " << userColor << " on each face:" << endl;
    for (int face = 0; face < NUM_FACES; face++)
    {
        cout << "Face" << face + 1 << " : " << colorCount[face] << endl;
    }
    return 0;
}
