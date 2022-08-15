#include <stdio.h>
#include <stdlib.h>

int *createArray(unsigned int length, int value)
{
    //durch den Pointer wird auf den Heapbereich (Adresse) gezeigt,
    //der von der Malloc Funktion zurück gegeben wird
    int *array = (int *)malloc(length * sizeof(int));

    if (array == NULL)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        array[i] = value;
    }

    //Speicheradresse, auf die der Pointer zeigt
    return array;
}

int *freeArray(int *array)
{
    if (array != NULL)
    {
        free(array);
    }
    return NULL;
}

int main()
{
    unsigned int length = 3;

    int *array = createArray(length, 1);

    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }

    array = freeArray(array);
    return 0;
}
