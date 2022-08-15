#include <stdio.h>
#include <stdlib.h>

#include "Lib.h"

int minArray(int *array, unsigned int length)
{
    int current_min = array[0];

    for (unsigned int i = 1; i < length; i++)
    {
        if (array[i] < current_min)
        {
            current_min = array[i];
        }
    }
    return current_min;
}

int maxArray(int *array, unsigned int length)
{
    int current_max = array[0];

    for (unsigned int i = 1; i < length; i++)
    {
        if (array[i] > current_max)
        {
            current_max = array[i];
        }
    }
    return current_max;
}
