#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void triversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != NULL);
}
int isFull(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
        return 1;
    return 0;
}

int isEmply(struct node *top)
{
    if (top == NULL)
        return 1;
    return 0;
}

struct node *push(struct node *head, int val)
{
    if (isFull(head))
    {
        printf("stack overflow\n");
    }
    else
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));

        ptr->data = val;
        ptr->next = head;
        head = ptr;
        return head;
    }
}
//there is other method as well by maiking (struct node* head=NULL)
//as global variable 
int pop(struct node **head)
{

    if (isEmply(*head))
    {
        printf("stack underflow");
    }
    else
    {
        struct node *p = *head;
        int x= p->data;
        *head = (*head)->next;
        free(p);
        return x;
    }
}
int peek( struct node* head, int pos)
{
    struct node * ptr= head;
    for(int i=1;(i<=pos-1 && ptr!=NULL);i++)
    {
        ptr=ptr->next;
    }
    if(ptr!=NULL)
    {
        return ptr->data;  
    }
    return -1; 
}

int main()
{
    //this 
    struct node* head=NULL;
    head = push(head,2);
    head = push(head,34);
    head = push(head,26);
    head = push(head,6);
    head = push(head,8);
    printf("value at position 3:%d\n",peek(head,3));
    printf("after\n");
    triversal(head);
    printf("Popped element is %d\n",pop(&head));
    triversal(head);
    return 0;
}