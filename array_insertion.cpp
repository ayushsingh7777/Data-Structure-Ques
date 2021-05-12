#include<iostream>
#include<string.h>
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
int indInsertion(int arr[],int size, int element,int capacity, int position)
{
    if(size>=capacity)
        return 0;
    size++;
    for(int i=size-1;i>=position;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[position]= element;
    return 1;
    

}
int main()
{
    int arr[100]= {2,4,3,5,6,7,8};
    int ele,posi,cap=100,size=7,e;
    /*char ch = 'y';
    while(ch =='y')
    {
        cout<<"enter value for arr["<<size<<"]=";
        cin>>arr[size];
        cout<<"y/n to enter more element:";
        cin>>ch; 
        size++;
    }
    cout<<"enter 1 to display the array:";
    cin>>e;
    if(e==1)
    display(arr,size);*/
    cout<<"enter the element to be insert:";
    cin>>ele;
    cout<<"enter the position:";
    cin>>posi;
    indInsertion(arr,size,ele,cap,posi);
    size+=1;
    display(arr,size);

   /* if(indInsertion(arr,size,ele,cap,posi))
    {
       size++; 
        cout<<"element inserted successfully"<<endl; 

        display(arr,size);
    }
    else
        cout<<"error";*/
    



}