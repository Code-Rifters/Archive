// Amira Hassan
#include <stdio.h>
unsigned long long int pow(int x , int n)
{
    unsigned long long int result = 1;
    while(n != 0){
        result *= x;
        n--;
    }
    return result;
}
int main()
{
    int t , x , n;
    scanf("%d" , &t);
    for(int i=0; i<t; i++){
            scanf("%d%d" , &x , &n);
            printf("%llu\n" , pow(x , n));
    }
    return 0;
}
