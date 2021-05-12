#include<iostream>
using namespace std;

void display(int arr[], int n)
{
    //Traversal
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertion_sort(int* A, int n)
{
    int key,j;
    for(int i=1; i<=n-1; i++)
    {
        key= A[i];
        j=i-1;
        while(j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}
int main()
{
    int ar[]={45,34,67,8,9,1,5};
    int n=7;
    display( ar , n);
    insertion_sort(ar, n);
     display( ar , n);
    return 0;
}
