#include<stdio.h>
#include<stdlib.h>
int operationChoices(int c,int a , int b )
{
    int sum=0, count=1;
    if(c==1)
    {
        sum=a+b;
        
    }
    else if (c==2)
    {
       sum=a-b;
       
    }
    else if (c==3)
    {
       sum=a*b;
       
    }
    else if (c==4)
    {
       sum=a/b;
       
    }
    else
    {
        printf("wrong input");
    }
    return sum;
  
    
}
int main()
{
    int a=12,b=13,c=5;

   printf("%d",operationChoices(c,a,b));
   return 0;
}