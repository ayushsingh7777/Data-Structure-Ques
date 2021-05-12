#include<stdio.h>
#include<stdlib.h>
// My logic to ckeck whether tree is BST or not

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
//Globally declare variable so value of variable doesn't change while recursion 
int arr[10],i=0;
struct node* createNode(int i)
{
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=i;
    p->left=NULL;
    p->right=NULL;
    return p;
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
int storeArr(int a,int i)
{
    //storing value of in an array
    arr[i]=a;
    printf("%d",arr[i]);
}
void isBST(struct node* p)
{
    if(p!=NULL)
    {
        isBST(p->left);
        //printf("%d",p->data);
        //passing data and counter variable with every recursion value 
        // of 'i' will increase as the it is globally declared.
        storeArr(p->data,i++);
        isBST(p->right);
    }
}


int main()
{
     struct node *p=createNode(6);
     struct node *p1=createNode(3);
     struct node *p2=createNode(8);
     struct node *p3=createNode(1);
     struct node *p4=createNode(4);
    // Finally The tree looks like this:
    //      6
    //     / \
    //    3   8
    //   / \
    //  1   4  
     p->left=p1;
     p->right=p2;
     p1->left=p3;
     p1->right=p4;
   // inorder(p);
    isBST(p);
    int temp=0,count=1;
    for(int j=0;j<i-1;j++)
    {
        // printf("%d",arr[j]);
        //checking values in array are assending or not   
            if(arr[j]>arr[j+1])
            {
                
                printf("\nNot BST");
                count=0;
                break;
            }      
    }
    if(count)
        printf("\n BST");
   return 0;
}






