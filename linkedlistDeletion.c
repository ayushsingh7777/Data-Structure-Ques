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

struct node* delBegin(struct node* head)
{
    struct node*p=head;
    head=head->next;
    free(p);
    return head;
}

struct node* delAtIndex(struct node* head,int index)
{
    struct node* p=head;
    struct node * ptr= head;
    int i=1;
    while (i!=index-1)
    {
        p=p->next;
        ptr=ptr->next;
        i++;
    }
    ptr=ptr->next;
    p->next=ptr->next;
    free(ptr);
    
    return head;
}
struct node * delEnd(struct node* head)
{
    struct node *p= head;
    struct node *ptr=head->next;
    while(ptr->next!= NULL)
    {
        ptr=ptr->next;
        p=p->next;
    }
    p->next=NULL;
    free(ptr);
    return head;

}
struct node* delAtValue(struct node * head, int val)
{
    struct node * p= head->next;
    struct node * ptr= head;
    // second condition is for when our variable is not in the linked list
    while(p->data!= val && p->next!=NULL)
    {
        p=p->next;
        ptr=ptr->next;
    }
    //only when we'll perform deletion when date if node p is equal to value
    //otherwise the last node get deleted.
    if(p->data==val)
    {
        ptr->next=p->next;
        free(p);
    }
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

    head=insert_begin(head,12);
    head=insert_begin(head,45);
    head=insert_begin(head,56);
    printf("before\n");
    triversal(head);
    head=delAtValue(head,2);
    printf("after\n");
    triversal(head);
    return 0;
}