\*JudyZox*\
#include <stdio.h>
#include <ctype.h>
 
int main() {
    char s[100001];
    scanf("%s", s);
 
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ',') {
            printf(" ");
        } else if (isupper(s[i])) {
            printf("%c", tolower(s[i]));
        } else if (islower(s[i])) {
            printf("%c", toupper(s[i]));
        }
    }
 
    return 0;
}
