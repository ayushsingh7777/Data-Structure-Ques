#include<stdio.h>

int binarySearch( int *ar,int size,int no)
{
    int low=0,high=size-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ar[mid]==no)
            return mid;
        if(ar[mid]>no)
            high=mid-1;   
        else 
            low=mid+1;      
    }
    return -1;
    
    
}

int main()
{
    int ar[10]={2,8,14,32,66,100,104,203,400};
    int size= sizeof(ar)/sizeof(int);
    int no=400;
    int searchindex=binarySearch( ar,size,no);
    printf("the element %d was founf at index %d\n",no,searchindex);
    return 0;
}
