#include<iostream>
using namespace std;
int main()
{
    int i,r;
    cout<<"enter the value of row:";
    cin>>r;
    for (i=1;i<=r;i++)
    {
        for(int k=i;k<=r;k++)
        {
            cout<<" ";
        }

        for(int j=1;j<=(i*2)-1;j++)
        cout<<"*";
        cout<<endl;
    }
    return 0;
    
}