#include<iostream>

using namespace std;
int main()
{
    int a,k;
    cout<<"input the odd row:";
    cin>>a;
    for(int i=1;i<=(a/2)+1;i++)
    {
        for(int j=1;j<=i;j++)
        
            cout<<"*";
        cout<<endl;


    }
    for(int k=(a/2);k>=1;k--)
    {
        for(int l=1;l<=k;l++)
        
            cout<<"*";
        cout<<endl;


    }
    return 0;

}