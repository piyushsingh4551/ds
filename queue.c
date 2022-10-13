/*
 * C Program to Implement a Queue using an Array
 */
#include <stdio.h>
 
#define n 50
 
void insert();
void delete();
void display();
int arr[n];
int rear = - 1;
int front = - 1;
main()
{
    int choice;
    while (1)
    {
        printf("Enter 1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            return 0;
            break;
            default:
            printf("Wrong choice \n");
        } /* End of switch */
    } /* End of while */
} /* End of main() */
 
void insert()
{
    int x;
    if (rear == n - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &x);
        rear = rear + 1;
        arr[rear] = x;
    }
} /* End of insert() */
 
void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", arr[front]);
        front = front + 1;
    }
} /* End of delete() */
 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
}