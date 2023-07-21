\*JudyZox*\
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1001], t[1001];
    scanf("%s %s", s, t);
 
    int len_s = strlen(s);
    int len_t = strlen(t);
 
    printf("%d %d\n", len_s, len_t);
    printf("%s %s\n", s, t);
 
    return 0;
}
