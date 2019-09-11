#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct client
{
    char Name[50];
    char Id[10];
    float Credit;
    char Address[100];
};

int main(int argc, char const *argv[])
{
    struct client cl = {0};
    strcpy(cl.Name, "ASLA");
    strcpy(cl.Id, "0000000001");
    cl.Credit = 100000.0f;
    strcpy(cl.Address, "#673 haksjhauh");

    printf("Client information is: %s, %s, %f, %s", cl.Name, cl.Id, cl.Credit, cl.Address);
    return 0;
}

