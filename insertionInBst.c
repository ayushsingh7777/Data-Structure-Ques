#include<stdio.h>
#include<stdlib.h>
// My logic of insertion in BST
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
struct node *insert(struct node* a,int val)
{
    //  struct node*p=(struct node*)malloc (sizeof(struct node));
    //  p=a;
    struct node*p=a;
    struct node*new=createNode(val);
    int count=1;
    while(p!=NULL)
    {
        if(val==p->data)
        {
            return;
        }
        else if(val>p->data)
        {
            if(p->right==NULL)
            {
                p->right=new;
                break;
            }
            else
                p=p->right;
        }
        else
        {
            if(p->left==NULL)
            {
                p->left=new;
                break;
            }
            else
                p=p->left;
        } 
    }
    printf("\ninsertion successfull\n");
   // printf("%d\n",a->right->right->right->data);
    return a;
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

    struct node* q=insert(p,17);
    inorder(q);
    
        
   return 0;
}