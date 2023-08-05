// Amira Hassan
#include<stdio.h>
int reverse(int x)
{
    int reverseOfX[100] = {0} , count = 0 , y  , value = 0;
    while(x > 0){
        y = x % 10;
        reverseOfX[count++] = y;

        x /= 10;
    }
    for(int i=0; i < count; i++){
        for(int v = count; v > i+1; v--){
            reverseOfX[i] *= 10;
        }
//        printf("%d\n" , reverseOfX[i]);
        value += reverseOfX[i];
    }
    return value;
}
int main()
{
    int t , x;
    scanf("%d" , &t);
    for(int i=0; i<t; i++){
        scanf("%d" , &x);
        printf("%d\n" , reverse(x));
    }
    return 0;
}
