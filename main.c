#include "stdlib.h"
#include "stdio.h"
#include "string.h"



int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return (n * factorial(n-1));
}

int main(int argc, char const *argv[])
{
    int result = factorial(5);
    printf("Factorial of 5 is: %d\n", result);


    return 0;
}
