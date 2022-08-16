#include <stdio.h>
#include <string.h>

int main()
{
    int data[5] = {0};

    for (unsigned int i = 0; i < 5; i++)
    {
        fscanf(stdin, "%d", &data[i]);
    }

    printf("\n");

    for (unsigned int i = 0; i < 5; i++)
    {
        fprintf(stdout, "%d\n", data[i]);
    }

    printf("\n");

    for (unsigned int i = 0; i < 5; i++)
    {
        fprintf(stderr, "%d\n", data[i]);
    }
    return 0;
}
