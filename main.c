#include "stdlib.h"
#include "stdio.h"
#include "string.h"

char s[] = "GeeksforGeeks";

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return (n * factorial(n - 1));
}

int factorialNonRecursion(int n)
{
    int result = 1;
    for (int i = n; i > 1; i -= 2)
    {

        result = result * i * (i - 1);
    }
    return result;
}

void reverseFunction()
{
    int n = sizeof(s);

    printf("String len %d\n", n);
}
void reverse(char *stringToreverse, int a, int b)
{
    char temporal;

    if (a >= b)
    {
        return;
    }
    temporal = stringToreverse[a];
    stringToreverse[a] = stringToreverse[b];
    stringToreverse[b] = temporal;

    reverse(stringToreverse, ++a, --b);
}

int main(int argc, char const *argv[])
{
    int n = 6;
    int result = factorial(n);
    printf("Factorial of %d is: %d\n", n, result);

    int result2 = factorialNonRecursion(n);
    printf("Factorial non recursive of %d is: %d\n", n, result2);

    char myString[] = {"1234"};
    printf("Before the reverse %s\n", myString);

    reverse(myString, 0, strlen(myString) - 1);

    printf("After the reverse %s\n", myString);

    return 0;
}
