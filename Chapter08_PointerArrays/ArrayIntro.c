#include <stdio.h>

int main()
{
    int numbers[4];
    //fill
    for (int i = 0; i < 4; i++)
    {
        numbers[i] = 1337;
    }

    //read out
    for (int i = 0; i < 4; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    return 0;
}
