#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * left;
    struct node * right;
};

struct node* createNode(int a)
{
    //creating a node pointer
    struct node *p;
    //allocation memory in the heap
    p=(struct node*)malloc (sizeof(struct node));
    p->data=a;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void preorder(struct node* p)
{
    if(p!=NULL)
    {     
        printf("%d",p->data);
        preorder(p->left);
        preorder(p->right);
    }
}
void postorder(struct node* p)
{
    if(p!=NULL)
    {       
        postorder(p->left);
        postorder(p->right);
        printf("%d",p->data);
    }
}
void inorder(struct node* p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        printf("%d",p->data);
        inorder(p->right);
    }
}
int main()
{
     struct node *p=createNode(2);
     struct node *p1=createNode(3);
     struct node *p2=createNode(5);
     struct node *p3=createNode(6);
     struct node *p4=createNode(9);
     // Finally The tree looks like this:
    //      2
    //     / \
    //    3   5
    //   / \
    //  6   9  
     p->left=p1;
     p->right=p2;
     p1->left=p3;
     p1->right=p4;
     preorder(p);
     printf("\n");
     postorder(p);
     printf("\n");
     inorder(p);
   return 0;
}