// Amira Hassan
#include<stdio.h>
#define SIZE 6
int *insertion(int a[] , int x , int y)
{
    for(int i=0; i<SIZE; i++){
        if(y == i){
            for(int s = SIZE; s>y; s--){
                a[s] = a[s-1];
            }
            a[y] = x;
        }
    }
    return a;
}
int main()
{
    int a[] = {1,2 ,3 ,4 ,5};
    int *b;
    int x , y;
    scanf("%d%d" , &x , &y);
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++){
        printf("%d " , a[i]);
    }
    printf("\n");
     b = insertion(a , x , y);
    for(int i=0; i<SIZE; i++){
        printf("%d " , b[i]);
    }

    return 0;
}
