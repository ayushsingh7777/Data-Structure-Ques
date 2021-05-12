
#include<stdio.h>
#include<stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 * question-https://leetcode.com/problems/two-sum/
 */
int* twoSum(int* nums, int numsSize, int target){
    int i=0,j=numsSize-1,sum;
    int*a=(int*)malloc(2*sizeof(int));
    while(i!=j)
    {
        
        sum=nums[i]+nums[j];
        if(sum==target)
        {
            a[0]=i;
            a[1]=j;
            return a;
        }
        else if(sum >target)
            j--;
        else 
            i++;
    }
return;
}
int main()
{
    int arr[10]={1,2,3,4,5,6};
    int target=7,size=5;
    int *a=twoSum(arr,size,target);
    for(int i=0;a[i]<5;i++)
        printf("%d\n",a[i]);
   
   return 0;
}