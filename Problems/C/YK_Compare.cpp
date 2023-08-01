// Yasmin Kamal
#include <stdio.h>
#include <string.h>
int main(){
    char x[21] , y[21];
    scanf("%s %s",x,y);
    printf("%s",strcmp(x,y)>0?y:x);
}
