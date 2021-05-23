#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void *ReplaceCharacter(char str[], int n, char ch1, char ch2)
{
    char ch;int count=1;
    for(int i=0;str[i]!='\0';i++)
    {

        if(str[i]==ch1)
        {
            str[i]=ch2;
            count=0;
        }
        else if (str[i]==ch2)
        {
            str[i]=ch1;
            count=0;
        }
    }
    if(count)
            printf("string unchange\n");
   printf("%s",str);
}
int main()
{
   
   
  char str[]="aaaaaaaaappppppppp",ch1='a',ch2='p';
   int n=strlen(str);
   ReplaceCharacter(str,  n, ch1 ,ch2);
   return 0;
}