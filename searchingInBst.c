#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int a)
{
    //creating a node pointer
    struct node *p;
    //allocation memory in the heap
    p=(struct node*)malloc (sizeof(struct node));
    p->data =a;
    p->left=NULL;
    p->right=NULL;
    return p;
}

void inorder(struct node* p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        printf(" %d",p->data);
        inorder(p->right);
    }
}
//search using recursion
struct node* searching(struct node* p,int val)
{
    if(p==NULL)
        return NULL;
    if(p->data==val)
        return p;
    else if(val>p->data)
           return searching(p->right,val);
    else
           return searching(p->left,val);
      
}
//Iterative search
struct node* iterativeSeach(struct node* p,int val)
{
    while(p!=NULL)
    {
        if(p->data==val)
            return p;
        else if (val<p->data)
            p=p->left;
        else
            p=p->right;
        
    }
    return NULL;
      
}
int main()
{
     struct node *p=createNode(10);
     struct node *p1=createNode(3);
     struct node *p2=createNode(20);
     struct node *p3=createNode(1);
     struct node *p4=createNode(4);
     struct node *p5=createNode(15);
     struct node *p6=createNode(25);
     // Finally The tree looks like this:
    //      10
    //     / \
    //    3   20
    //   / \  / \
    //  1  4 15 25 
     p->left=p1;
     p->right=p2;
     p1->left=p3;
     p1->right=p4;
     p2->left=p5;
     p2->right=p6;
    //  preorder(p);
    //  printf("\n");
    //  postorder(p);
    //  printf("\n");
     inorder(p);

     struct node* n=searching(p,1);
     if(n!=NULL)
         printf("\n value found: %d",n->data);
     else 
         printf(" \nElement not found");


    struct node* m=iterativeSeach(p,25);
    if(m!=NULL)
        printf("\n value found: %d",m->data);
    else 
        printf(" \nElement not found");
        
   return 0;
}