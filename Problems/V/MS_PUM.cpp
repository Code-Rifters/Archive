//Mohamed seif
#include <iostream>

using namespace std;

int main()
{
    int n;
    int x = 0 ;

    cin >> n;
    for (size_t i = 1; i <= n; i++)
       {
           for (size_t j = 1; j <= 3; j++)
            {
                x++;
                if (x % 4 != 0)
                    cout << x << ' ';
                else
                {
                    x++;
                    cout << x << ' ';
                }
            }
            cout << "PUM\n";
       }
}
