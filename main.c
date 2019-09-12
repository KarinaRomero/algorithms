#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int inputArray[] = {6, 4, 3, 11, 10};

void swichPosition(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(/*int inputArray[], */ int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(inputArray[j] > inputArray[j+1])
            {
                 swichPosition(&inputArray[j], &inputArray[j+1]);
            }
        }
    }
}

void printArray()
{
    for(int i = 0; i < sizeof(inputArray); i++)
    {
        printf(" %d, ", inputArray[i]);
    }
    printf(" ------- \n");
}


int main(int argc, char const *argv[])
{
    printArray();

    int n = sizeof(inputArray)/2;

    bubbleSort(n);
    printArray();

    return 0;
}

