#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack
{
    int size;
    int top;
    char* arr;
};
int isEmpty(struct stack* ptr)
{
    if(ptr->top== -1)
        return 1;
    return 0;
}
int isFull(struct stack* ptr)
{
    if(ptr->top==ptr->size-1)
        return 1;
    return 0;
}
int isOperator(char ch)
{
    if(ch=='+' ||ch=='-' ||ch=='*' ||ch=='/')
        return 1;
    return 0;
}
void push(struct stack* ptr,char ch)
{
    if(isFull(ptr))
    {
        printf("STACK OVERFLOW");
        printf("CANNOT PUSH THE VARIABLE %s in the stack:",ch);

    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=ch;
    }
}

char pop(struct stack* ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int precedence(char ch)
{
    if(ch=='*'||ch=='/')
        return 2;
    else if(ch=='+'||ch=='-')
        return 1;
    else
        return 0;


}
int main()
{
    struct stack * sp= (struct stack*) malloc(sizeof(struct stack));
    sp->top=-1;
    sp->arr= (char*)malloc(sp->size*sizeof(char));
    sp->size=10;
    char *infix= "x-y/z-k*d";
    printf("infix :%s\n",infix);
    char *postfix = (char *) malloc((strlen(infix)+1) * sizeof(char));
    int i=0;//tracking infix
    int j=0;//tracking postfix
    while(infix[i]!='\0')
    {
        if(!isOperator(infix[i]))
        {
            postfix[j]=infix[i];
            i++;
            j++;

        }
        else
        {
            if(precedence(infix[i])>precedence(sp->arr[sp->top]))
            {
                push(sp,infix[i]);
                i++;
            }
            else
            {
                postfix[j]=pop(sp);
                j++;
            }
        }
        
        
    }
    while (!isEmpty(sp))
    {
        postfix[j]=pop(sp);
        j++;
    }
    postfix[j]='\0';
    printf("postfix :%s",postfix);
    return 0;
}