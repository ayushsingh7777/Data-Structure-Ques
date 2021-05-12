#include<iostream>
using namespace std;
int main()
{
    int size;
    int *ptr;
    cout<<"enter size of an array:"<<endl;
    cin>>size;
    
    ptr =new int[size];
    cout<<"Enter value to be stored in array"<<endl;
    for(int i=0; i<size;i++)
    {
        cin>>ptr[i];
    }
    cout<<"values in array"<<endl;
    for(int i=0; i<size;i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
    
}