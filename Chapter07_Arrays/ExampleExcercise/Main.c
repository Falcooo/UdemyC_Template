#include "Lib.h"
#include <stdbool.h>
#include <stdio.h>

/**
 * Array mit max. 1000 Speicherblöcken angeben
 * Bis der User eine Zahl <= 0 eingibt, sollen Int-Werte für das Array eingelesen werden
 * Von dem Array das Minimum & Maximum berechnen
 */

void exercise()
{
    int data[1000] = {0};
    int user_input = 0;
    unsigned int length = 0;

    printf("Pleas enter numbers:\n");

    do
    {
        scanf("%d", &user_input);
        if (user_input > 0)
        {
            data[length] = user_input;
            length++;
        }
        else
        {
            break;
        }

    } while (true);

    int min_value = minArray(data, length);
    int max_value = maxArray(data, length);

    printf("Min: %d\n", min_value);
    printf("Max: %d\n", max_value);
}

int main()
{
    exercise();
    return 0;
}
