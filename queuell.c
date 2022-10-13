#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct Queue
{
    struct node *front, *rear;
};
struct node *getNode(int element)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->info = element;
    temp->next = NULL;
    return temp;
}
struct Queue *createQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}
void enqueue(struct Queue *q, int element)
{
    struct node *p = getNode(element);
    if (q->front == NULL)
    {
        q->front = q->rear = p;
        printf("inserted: %d\n", q->rear->info);
        return;
    }
    q->rear->next = p;
    q->rear = p;
    printf("inserted: %d\n", q->rear->info);
}
void dequeue(struct Queue *q)
{
    if (q->front == NULL && q->rear == NULL)
        printf("No elements to Dequeue\n");
    struct node *temp = q->front;
    printf("Deleted Element:%d\n", q->front->info);
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    free(temp);
}
void display(struct Queue *q)
{
    struct node *temp = q->front;
    if (q->front == NULL && q->rear == NULL)
        printf("No elements to Display\n");
    else
    {
        while (temp != NULL)
        {
            printf("Element:%d\n", temp->info);
            temp = temp->next;
        }
    }
}
int main()
{
    struct Queue *q = createQueue();
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    display(q);
    dequeue(q);
    dequeue(q);
    display(q);
    return 0;
}
