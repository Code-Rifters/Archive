// Amira Hassan
#include<stdio.h>
int factorial(int x)
{
    int result = 1;
    for(int i=1; i<=x; i++){
        result *= i;
    }
    return result;
}
int main()
{
    int t , x;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d" , &x);
        printf("%d\n" , factorial(x));
    }
    return 0;
}
