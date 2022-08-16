#include <stdio.h>
#include <stdlib.h>

int *creatArray(unsigned int length, int value)
{
    int *array = (int *)malloc(length * sizeof(int));

    if (array == NULL)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        array[i] = value;
    }

    return array;
}

//Pointer Pointer
int **createMatrix(unsigned int num_rows, unsigned int num_cols, int value)
{
    /**
     * Speicherung im Heap
     * in dem Array (welcher auch ein Pointer ist) sind Pointer abgelegt
     * die Pointer (je Zeile 1 Pointer) zeigen auf die Speicherstelle, wo die Werte abgelegt sind
     * int **r = Pointe auf Int-Pointer
     */
    int **matrix = (int **)malloc(num_rows * sizeof(int *));

    //für jede Zeile wird der dort benötigte Speicher reserviert
    for (unsigned int i = 0; i < num_rows; i++)
    {
        //für jede Zeile ein eigenständiges Array reservieren
        matrix[i] = creatArray(num_cols, value);
    }

    return matrix;
}

void printArray(int *array, unsigned int length)
{
    if (array == NULL)
    {
        return;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }
}

int *freeArray(int *array)
{
    if (array != NULL)
    {
        free(array);
    }

    return NULL;
}

void printMatrix(int **matrix, unsigned int num_rows, unsigned int num_cols)
{
    if (matrix == NULL)
    {
        return;
    }

    for (unsigned int i = 0; i < num_rows; i++)
    {
        printArray(matrix[i], num_cols);
    }
}

int **freeMatrix(int **matrix, unsigned int num_rows)
{
    for (unsigned int i = 0; i < num_rows; i++)
    {
        matrix[i] = freeArray(matrix[i]);
    }

    free(matrix);
    return NULL;
}

int main()
{
    unsigned int length = 3;
    int *array = creatArray(length, 1);
    printArray(array, length);
    array = freeArray(array);

    //             2 Zeilen, 3 Spalten, 1 Wert
    int **matrix = createMatrix(2, 3, 1);
    printMatrix(matrix, 2, 3);
    matrix = freeMatrix(matrix, 2);

    return 0;
}
