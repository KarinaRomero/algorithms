#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int dataArray[] = {
    3,	94,	86,	82,	90,
10,	87,	36,	61,	8,
17,	15,	22,	10,	23,
78,	25,	2,	30,	45,
98,	43,	98,	59,	53,
57,	2,	64,	1,	41,
32,	58,	19,	99,	60,
74,	48,	80,	44,	25,
68,	1,	89,	77,	60,
25,	99,	30,	76,	32,
57,	82,	52,	44,	72,
87,	34,	87,	65,	30,
54,	6,	31,	33,	44,
44,	42,	82,	90,	17,
9,	98,	28,	86,	69,
3,	17,	8,	45,	98,
12,	47,	95,	43,	72,
39,	41,	82,	74,	56,
65,	79,	50,	26,	67,
100,24,	67,	38,	57
};

int merge_m(int dataArray[], int a, int half, int b)
{
    int temp1[100];
    int temp2[100];

    int i, j, k;
    int n1 = half - a + 1;
    int n2 = b - half;

    for (i = 0; i < n1; i++)
    {
        temp1[i] = dataArray[a + i];
    }
    for (j = 0; j < n2; j++)
    {
        temp2[j] = dataArray[half + j + 1];
    }
    temp1[i] = 9999;
    temp2[j] = 9999;

    i = 0;
    j = 0;

    for (k = a; k <= b; k++)
    {
        if (temp1[i] <= temp2[j])
        {
            dataArray[k] = temp1[i++];
        }
        else
        {
            dataArray[k] = temp2[j++];
        }
    }
    return 0;
}

int merge_sort_g(int dataArray[], int a, int b)
{
    int half;
    if (a < b)
    {
        half = (a + b) / 2;
        merge_sort_g(dataArray, a, half);
        merge_sort_g(dataArray, half + 1, b);
        merge_m(dataArray, a, half, b);
    }
    return 0;
}

int main(int argc, char const *argv[])
{

    int n = (sizeof(dataArray)/sizeof(dataArray[0])) - 1;
    merge_sort_g(dataArray, 0, n);

    printf("The array is: %d \n", n);
    for (int i = 0; i < n+1; i++)
    {
        printf("%d\n", dataArray[i]);
    }
    return 0;
}