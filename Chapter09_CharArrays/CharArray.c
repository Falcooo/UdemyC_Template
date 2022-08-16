#include <stdio.h>
#include <stdlib.h>

int main()
{
    //\0 = simbolisiert das Ende der Arrays
    char name1[] = {'C', 'h', 'i', 'a', 'r', 'a', '\0'};
    char name2[7] = {'C', 'h', 'i', 'a', 'r', 'a', '\0'};
    char name3[] = "Chiara ist cool";
    char name4[32] = {'\0'};

    char *name5 = (char *)malloc(31 * sizeof(char));
    name5[0] = 'C';

    for (unsigned int i = 0; i < 16; i++)
    {
        printf("%c", name3[i]);
    }

    printf("\n");
    printf("%s\n", name2);
    return 0;
}
