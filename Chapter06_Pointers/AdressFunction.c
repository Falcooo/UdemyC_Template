#include <stdio.h>
int main()
{
    int my_value = 1337;
    printf("Value of my_value: %d\n", my_value);
    //Value of my_value: 1337
    printf("Memory Adress of my_value: %p\n", &my_value);
    //Memory Adress of my_value: 0xAA

    printf("\n");

    int *my_pointer = &my_value;
    printf("Value of my_pointer: %p\n", my_pointer);
    //Value of my_pointer: 0xAA

    printf("Value of the reference of my_pointer: %d\n", *my_pointer);
    //Value of the reference of my_pointer: 1337
    printf("Memory Adress of my_pointer: %p\n", &my_pointer);
    //Memory Adress of my_pointer: 0xFF

    printf("\n");
    return 0;
}
