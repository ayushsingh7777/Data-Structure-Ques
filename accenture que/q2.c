#include<stdio.h>
void sort(int* ar,int size)
{
    int temp=0;
    for (int i = 0; i < size; i++)
    {
        for ( int j = 0; j<size-i; j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[i+1];
                ar[i+1]=ar[i];
                ar[i]=temp;
            }
        }
        
    }
    
}
int secondlargeSum(int *arr, int size)
{
    int evenArr[size],oddArr[size],i,j,k,sum;
    for ( i = 0,j=0,k=0; i < size; i++)
    {
        if(arr[i]%2==0)
        {
            evenArr[j]=arr[i];
            j++;
        }
        else
        {
            oddArr[k]=arr[i];
            k++;
        }
    }
    sort(evenArr,j);
    sort(oddArr,k);
    printf("even\n");
    for ( i = 0; i < j; i++)
    {
        
        printf("%d\n",evenArr[i]);
    }
    printf("odd\n");
    for ( i = 0; i < k; i++)
    {
        printf("%d\n",oddArr[i]);
    }
    
    sum=evenArr[1]+oddArr[1];
    return sum;
    
}
int main()
{
   int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++)
    {
        //printf("\na[%d]:",i);
        scanf("%d",&arr[i]);
    }
   printf("sum of second largest number from both the matrices=%d",secondlargeSum(arr,size));
   
   return 0;
}