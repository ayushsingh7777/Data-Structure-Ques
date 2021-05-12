#include <stdio.h>
//question-https://www.youtube.com/watch?v=A45nGsByJj4
int beautiful(int num)
{
    int k,j,count = 0;
    while (num>10)
    {
        printf("while iteration\n");
        k = num % 10;
       while(k==0&&num>10)
       {
           printf("first while\n");
           
           k = num % 10;
           num=num/10;
           printf("%d\n",num);
       }
       if(num>10)
       {
        for (int i = k; i<10; i++)
        {

            count++;
            num++;
            printf("for iteration\n");
            printf("Num=%d\n",num);
            printf("count=%d\n",count);
        }
        num = num / 10;
       }
    }
    
    count=count+9;
    return count;
}
int main()
{
    int n = 29953;
    int a= beautiful(n);
    printf("%d",a);
    return 0;
}