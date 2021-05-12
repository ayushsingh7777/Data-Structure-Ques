#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    int top;
    int size;
    char *arr;

};
int isFull(struct stack *ptr)
{
    if(ptr->top== ptr->size-1)
        return 1;
    return 0;
    
}
int isEmpty( struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    return 0;
}
void push(struct stack *ptr,char ch)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=ch;
    }
}
char pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("UnderFlow! cannot pop from the stack\n");
         return -1;
    }
    else
    {
        char c=ptr->arr[ptr->top];
        ptr->top--;
        return c;
    }

}


int main()
{
    struct stack * sp;
    sp->top=-1;
    sp->arr = (char *)malloc(sp->size*sizeof(char));
    char *ch="9+5(9(7-9(8*9)))";
    sp->size=strlen(ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='(')
            push(sp,ch[i]);
        else if (ch[i]==')')
        {
            pop(sp);
        }
    }
    
    if(!isEmpty(sp))
        printf("Unbalance Equation\n");
    else
        printf("Balanced Equation");
    return 0;
}

