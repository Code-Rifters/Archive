//Mohamed seif
#include <iostream>

using namespace std;

int main() {
    int cubes, counter = 0, n = 0 , result =0;
    cin >> cubes;

    int i = 1;

        while (cubes) {
            n+= i;
            result += n ;

            if(cubes <result)
                break ;
            else
                counter++;
            i++;
        }

    cout << counter;

    return 0;
}
