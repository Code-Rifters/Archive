// Amira Hassan
#include<stdio.h>
int fibonacci(int x)
{
    if(x == 0){
        return 0;
    }
    else if(x == 1){
        return 1;
    }
    else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
}
int main()
{
    int t , x;
    scanf("%d" , &t);
    for(int i=0; i<t; i++){
        scanf("%d" , &x);
        printf("%d\n" , fibonacci(x));
    }
    return 0;
}
