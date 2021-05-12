#include<stdio.h>

void printArray(int * A, int n)
{
    for(int i=0;i<n;i++)
        printf(" %d",A[i]);
}

void bubbleSortAdaptive(int *arr,int n)
{
    int j,temp;
    int isSorted=0;
    //for no. of passes
    for(int i=0;i<n-1;i++)
    {
        isSorted=1;
        printf("working on pass %d\n",i+1);
        j=0;
        //for comparisions in each pass
        while(j<n-i-1)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSorted=0;
            }
            j++;
            if(isSorted)
                return;
        }

    }
   

}

int main()
{
    int n;
    printf("enter thr size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    bubbleSortAdaptive(arr,n);
    printArray(arr,n);
    return 0;
}