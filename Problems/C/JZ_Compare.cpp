\*JudyZox*\
#include <stdio.h>
#include <string.h>
 
int main()
{
    char X[21], Y[21];
    scanf("%s %s", X, Y);
 
    int cmp = strcmp(X, Y);
 
    if (cmp < 0)
    {
        printf("%s\n", X);
    }
    else if (cmp > 0)
    {
        printf("%s\n", Y);
    }
    else
    {
        printf("%s\n", X);
    }
 
    return 0;
}
