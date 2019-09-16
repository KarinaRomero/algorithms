#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int dataArray[] = {
    3,	94,	86,	82,	90,
    10,	87,	36,	61,	8,
    7,	15,	22,	10,	23,
    78,	25,	2,	30,	45,
    98,	43,	98,	59,	53,
    57,	2,	64,	1,	41,
    32,	58,	19,	99,	60,
    74,	48,	80,	44,	25,
    68,	1,	89,	77,	60,
    25,	99,	30,	76,	32,
    7,	82,	52,	44,	72,
    87,	34,	87,	65,	30,
    54,	6,	31,	33,	44,
    44,	42,	82,	90,	17,
    9,	98,	28,	86,	69,
    3,	17,	8,	45,	98,
    12,	47,	95,	43,	72,
    9,	41,	82,	74,	56,
    65,	79,	50,	26,	67,
    100,24,	67,	38,	57
};

int divide(int data[], int a, int b)
{
    int i = (a-1);
    int pivot = data[b];
    int temporalValue;

    for(int j= a; j<b; j++)
    {
        if(data[j] <= pivot)
        {
            i++;
            temporalValue = data[i];
            data[i] = data[j];
            data[j] = temporalValue;

        }
    }
    temporalValue = data[i+1];
    data[i+1] = data[b];
    data[b] = temporalValue;
    return (i+1);
}

void quick_sort(int data[], int a, int b)
{

    //printf("a: %d, b: %d ,index: %d\n", a,b,1);
    if(a < b)
    {
        int index = divide(data, a, b);
        //printf("a: %d, b: %d ,index: %d\n", a,b, index);
        quick_sort(data, a, index-1);
        quick_sort(data, index+1, b);
    }

}

int main(int argc, char const *argv[])
{
    int n = ((sizeof(dataArray)/sizeof(dataArray[0])) ) - 1;
    printf("N: %d \n", n);
    quick_sort(dataArray, 0, n);

    printf("The array is: %d \n", n);
    for (int i = 0; i < n+1; i++)
    {
        printf("%d\n", dataArray[i]);
    }
    return 0;
}