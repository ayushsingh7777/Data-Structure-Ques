#include<stdio.h>

void pallindrom(int upper,int lower)
{
    for (int i = upper; i < lower; i++)
    {
        int a,num=i,reverse=0;
        while(i!=0)
        {
            a=num%10;
            num=num/10;
            reverse=reverse*10+a;
        }
        if(i==reverse)
        {
            printf("%d ",i);
        }
    }
    
}
int main()
{
    int upper ,lower;
    printf("Enter upper limit:",upper);
   scanf("%d",&upper);
   printf("Enter lower limit:",lower);
   scanf("%d",&lower);
   pallindrom(upper,lower);
   return 0;
}