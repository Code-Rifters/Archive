// Amira Hassan
#include<stdio.h>
int main()
{
    int n;
    scanf("%d" , &n);
    int nums[n];
    for(int i=0; i<n; i++){
        scanf("%d" , &nums[i]);
    }
    int *ptr = &nums[0];
    for(int i=0; i<n-1; i++){
        ptr++;
    }
    for(int i=0; i<n; i++){
        printf("%d " , *ptr);
        *ptr--;
    }

    return 0;
}
