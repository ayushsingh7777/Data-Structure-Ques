#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    int * arr; 
};

int isFull(struct stack * ptr)
{
    if(ptr->top== ptr->size-1)
        return 1;
    return 0;
}
int isEmpty(struct stack * ptr)
{
    if(ptr->top==-1)
        return 1;
    return 0;
}
void push(struct stack *ptr,int val)
{
    if(isFull(ptr))
        printf("STACK OVERFLOW!! cannot push %d in the stack.\n",val);
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pop(struct stack* ptr)
{
    if(isEmpty(ptr))
    {    printf("STACK UNDERFLOW!! cannot pop  from the stack.\n");
        return -1;
    }
    else
    {
        int val= ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }

}
int peek (struct stack* ptr, int position)
{
    if(ptr->top-position+1 <0)
    {
        printf("NOt a valid position for the stack\n");
        return -1;
    }
    else
        return ptr->arr[ptr->top-position+1];
    
}

int main()
{
    struct stack * sp= (struct stack *) malloc(sizeof(struct stack));
    sp ->size=10;
    sp ->top=-1;
    sp ->arr=(int *)malloc(sp->size*sizeof(int));
    int a;  
    printf("Stack has been created successfully\n");

    printf("Before pushing isFull:%d\n", isFull(sp));
    printf("Before pushing isEmpty:%d\n", isEmpty(sp));
    push(sp,48);
    push(sp,69);
    push(sp,70);
    push(sp,80);
    push(sp,79);
    push(sp,86);
    push(sp,23);
    push(sp,57);
    push(sp,64);
    push(sp,34);
    push(sp,4);
    printf("After pushing isFull:%d\n", isFull(sp));
    printf("After pushing isEmpty:%d\n", isEmpty(sp));

    printf("popped %d from the stack\n",pop(sp));
    printf("popped %d from the stack\n",pop(sp));
    for( int j=1; j<sp->top+1;j++)
    {
        printf("value at position %d is %d\n:",j,peek(sp,j));
    }
    return 0;
}