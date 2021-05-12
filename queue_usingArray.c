#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

int isFull(struct queue* q)
{
    if(q->rear==q->size-1)
        return 1;
    return 0;
}
int isEmpty(struct queue*q)
{
    if(q->front==q->rear)
        return 1;
    return 0;
}
void enquene(struct queue*q,int val)
{
    if(isFull(q))
        printf("QUEUE OVERFLOW\n");
    else
    {
        q->rear++;
        q->arr[q->rear]=val;
        printf("%d is inserted in the queue\n",val);
    }
}
int dequeue(struct queue*q)
{
    if(isEmpty(q))
    {
        printf("Queue Empty\n");
        return -1;
    }
    else
    {
        q->front++;
        int a=q->arr[q->front];
        return a;
    }
}
void display(struct queue*q)
{
    for(int i=q->front;i<q->rear;i++)
    {
        printf("%d \n",q->arr[i]);
    }
}
int main()
{
    struct queue q;
    q.size=10;
    q.front=q.rear= 0;
    q.arr=(int*) malloc(q.size*sizeof(int)); 

    enquene(&q,10);
    enquene(&q,1);
    enquene(&q,5);
    enquene(&q,14);
    enquene(&q,17);
    enquene(&q,12);
    printf("Element before dequeue\n");
     display(&q);
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Element after dequeue\n");
    display(&q);
    enquene(&q,32);
    enquene(&q,42);
    enquene(&q,52);
    enquene(&q,62);
    printf("Dequeuing element %d\n", dequeue(&q));
    display(&q);
    return 0;
}