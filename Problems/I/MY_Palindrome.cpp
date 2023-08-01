// Elazaz

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char word1[1001] , word2[1001];  
    cin >> word1;
    int len = strlen(word1);
    
    for(int i = len-1 , j =0; i >= 0 || j < len ; i-- , j++)
    {
        word2[j] = word1[i];
    }

    if (strcmp(word1, word2) == 0 )
    cout << "YES" << endl;
    else
    cout<<"NO" << endl;
    return 0;
}
