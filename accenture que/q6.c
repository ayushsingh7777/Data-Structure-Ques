#include<stdio.h>
int NumberOfCarries(int num1 , int num2)
{
    int count=0,a,b;
    while(num1!=0&&num2!=0)
    {
        
        a=num1%10;
        b=num2%10;
        num1=num1/10;
        num2=num2/10;
        if(a+b>9)
        {
         count++;
         num1++;
         }
    }
    
    return count;

}
int main()
{
    int num1=212,num2=611;
    printf("total carries=%d",NumberOfCarries(num1 , num2));
    return 0;
}