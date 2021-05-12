#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
void triversal(struct node* head)
{
    struct node* ptr=head;
   /* while(ptr->next!=head)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("%d\n",ptr->data);*/

    //or using do whileloop
    do
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head); 
}

struct node* insertAtFirst(struct node * head,int val)
{
    
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    struct node* p=head->next;
    while(p->next!=head)
    {
        p=p->next;
    }
    // at this point p points to the last node of this circular linked list
    p->next=ptr;
    ptr->next=head;
    head=ptr;

    return head;
}


int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    // Allocate memory for nodes in the linked list in Heap
    head =(struct node *)malloc (sizeof(struct node));
    second =(struct node *)malloc (sizeof(struct node));
    third =(struct node *)malloc (sizeof(struct node));
    fourth =(struct node *)malloc (sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next= head;
    triversal(head);
    printf("after\n");
    head= insertAtFirst(head,45);
    triversal(head);
    
    return 0;
}