#include <stdio.h>
int main()
{
    int my_value = 1337;
    printf("Value of my_value: %d\n", my_value);
    printf("Memory Adress of my_value: %p\n", &my_value);
    printf("\n");

    int *my_pointer = &my_value;
    printf("Value of my_pointer: %p\n", my_pointer);
    printf("Value of the reference of my_pointer: %d\n", *my_pointer);
    printf("Memory Adress of my_pointer: %p\n", &my_pointer);
    printf("\n");

    return 0;
}
