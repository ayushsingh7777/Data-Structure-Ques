#include<iostream>
using namespace std;
int main()
{
    for(int i=3; i<=7; i++)
    {
        int fact=1;   
        for(int j=1; j<=i; j++)
        {
            fact*=j;
        }
        cout<<"Factorial of "<<i<<"="<<fact<<endl;
    }
    return 0;
}