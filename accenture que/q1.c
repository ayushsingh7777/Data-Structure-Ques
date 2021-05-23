#include <stdio.h>
#include <stdlib.h>
int differenceofSum(int n, int m)
{
    int sum=0,sum2=0;
    for(int i=n;i<=m;i++)
    {
        if(i%n==0)
            sum=sum+i;
        else
            sum2=sum2+i;
    }
    return sum2-sum;
}

int main() {
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    printf("%d",differenceofSum(n,m));
    return 0;
}