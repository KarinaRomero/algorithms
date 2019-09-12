#include "stdlib.h"
#include "stdio.h"
#include "string.h"

#define SIZE 5

int values[SIZE];
int front = -1;
int rear = -1;

void enQueue(int value)
{
    if(rear == SIZE-1)
    {
        printf("Queue is full\n");
    } else
    {
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        values[rear] = value;
        printf("Queue added value: %d \n", value );
    }
}

void deQueue()
{
    if(front == -1)
    {
        printf("Queue is empty\n");
    } else
    {
        printf("Queue is delete %d\n",values[front]);
        front++;
        if(front > rear)
        {
            front = rear = -1;
        }
    }

}

int main(int argc, char const *argv[])
{
    enQueue(10);
    enQueue(2);
    enQueue(4);
    enQueue(5);
    enQueue(7);
    deQueue();
    deQueue();
    enQueue(3);
    enQueue(2);
    return 0;
}

