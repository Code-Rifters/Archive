#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N,A[1000];
    cin>>N;
    for (int i = 0; i < N; i++) 
        cin >> A[i];
    sort(A,A+N);
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;

}