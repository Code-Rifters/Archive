\*JudyZox*\
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000001];
    fgets(s, sizeof(s), stdin);
 
    int n = strlen(s);
    int i = 0;
 
    while (i < n && s[i] != '\\')
    {
        printf("%c", s[i]);
        i++;
    }
 
    printf("\n");
 
    return 0;
}
