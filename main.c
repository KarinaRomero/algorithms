#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include <limits.h>

#ifndef INT_MAX
#error INT_MAX not defined at this point
#endif

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

int greedyChange(int coinSet[], int n, int  N)
{
    if(N==0)
    {
        return 0;
    }
    if(N<0)
    {
        return INT_MAX;
    }
    int coins = INT_MAX;

    for(int i=0; i<n; i++)
    {
        int result = greedyChange(coinSet, n, N-coinSet[i]);
        if(result != INT_MAX)
        {
            coins = MIN(coins, result+1);
        }
    }
    return coins;
}

int main(int argc, char const *argv[])
{
    int coinSet[] = {1, 5, 10, 15, 20,};
    int n = sizeof(coinSet)/sizeof(coinSet[0]);
    int N = 27;

    printf("Coins to change due : %d\n", greedyChange(coinSet, n, N));
    return 0;
}