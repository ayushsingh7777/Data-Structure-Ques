#include <stdio.h>
#include <stdlib.h>


struct stack
{
    /* data */
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack* ptr)
{
    if (ptr->top == -1)
        return 1;
    return 0;
}
int isfull(struct stack* ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    return 0;
}

int main()
{
    /*  struct stack s;
    s.size= 80;
    s.top= -1;
    s.arr =(int *) malloc(s.size * sizeof(int));
    return 0;
    */
    
    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    if (isEmpty(s))
        printf("stack is empty");
    else
        printf("Stack is not empty");
    return 0;
}
