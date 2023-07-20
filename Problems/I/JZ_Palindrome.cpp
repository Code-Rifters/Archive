\*JudyZox*\
#include <stdio.h>
#include <string.h>
 
int main() {
    char s[1001];
    scanf("%s", s);
 
    int len = strlen(s);
    int pal = 1;
 
    for (int i = 0; i < len/2; i++) {
        if (s[i] != s[len-1-i]) {
            pal = 0;
            break;
        }
    }
 
    if (pal) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
 
    return 0;
}
