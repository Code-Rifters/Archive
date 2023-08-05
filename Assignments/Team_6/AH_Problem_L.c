// Amira Hassan
#include<stdio.h>
int isPrim(int x)
{
    int flag = 0;
    for(int i=2; i<x; i++){
        if(x % i == 0){
            flag++;
        }
    }
    return flag;
}
int main()
{
    int x , count = 0;
    scanf("%d" , &x);
    int primes[x];
    for(int i=2; i<=x; i++){
        if(isPrim(i) == 0){
            primes[count++] = i;
        }
    }
    for(int i=0; i<count; i++){
        printf("%d " , primes[i]);
    }
    return 0;
}
