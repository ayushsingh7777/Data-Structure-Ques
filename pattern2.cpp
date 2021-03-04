#include<iostream>
using namespace std;
int main()
{
    int i,r,g=1;
    cout<<"enter the value of row:";
    cin>>r;
    for (i=1;i<=r;i++)
    {
    
        for(int k=1;k<=i;k++)
        {
            cout<<g<<" ";
            g++;
        }

       cout<<endl; 
    }
    return 0;
    
}