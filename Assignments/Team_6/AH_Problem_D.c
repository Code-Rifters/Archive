// Amira Hasssan
#include<stdio.h>
int *ascendingOrder(int nums[] , int size)
{

    for(int i=0; i<size-1; i++){
        for(int x=i+1; x<size; x++){
            if(nums[i] > nums[x]){
                int temp = nums[i];
                nums[i] = nums[x];
                nums[x] = temp;
            }
        }
    }
    return nums;
}
int main()
{
    int *nums , *asc;
    int n;
    scanf("%d" , &n);
    for(int i=0; i<n; i++){
        scanf("%d" , &nums[i]);
    }
    nums = ascendingOrder(nums , n);
    for(int i=0; i<n; i++){
        printf("%d " ,nums[i]);
    }
    return 0;
}
