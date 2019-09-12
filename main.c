#include "stdlib.h"
#include "stdio.h"
#include "string.h"

void swichPosition(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int inputArray[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(inputArray[j] > inputArray[j+1])
            {
                 swichPosition(&inputArray[j], &inputArray[j+1]]);
            }
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

