#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
void triversal(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node * insert_begin( struct node* head, int val)
{
    struct node * ptr= (struct node*) malloc (sizeof(struct node));
    ptr->next=head;
    ptr->data=val;
    return ptr;
};
struct node * insertAtIndex( struct node* head, int val,int index)
{
    struct node * ptr= (struct node*) malloc (sizeof(struct node));
    int i=0;
    struct node* p=head;
    while( i!= index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=val;
    ptr->next=p->next;
    p->next=ptr;
    return head;
};
struct node * insertAtEnd(struct node* head, int val)
{
    struct node * ptr= (struct node*) malloc (sizeof(struct node));
    struct node * p=head;
    while( p->next!= NULL)
    {
        p=p->next;
    }
    ptr->data=val;
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
struct node * insertAfterNode(struct node* head, struct node* prevNode,int val)
{
    struct node * ptr= (struct node*) malloc (sizeof(struct node));
    ptr->data=val;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
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
    fourth->next= NULL;
    printf("linked list before insertion\n");
    triversal(head);
    head=insert_begin(head,12);
    printf("AFTER INSERTING AT THE BIGINING\n");
    triversal(head);
    printf("INSERTING AT THE index\n");
    head =insertAtIndex(head,10,3);
    triversal(head);
    printf("INSERTING AT THE end\n");
    head =insertAtEnd(head,14);
    triversal(head);
    printf("INSERTING After the node\n");
    head =insertAfterNode(head,second,89);
    triversal(head);


    
    return 0;
}