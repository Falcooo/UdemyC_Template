#include <stdio.h>

//call by value
float add(float val_add)
{
    printf("Memory Adress of val_add: %p\n", &val_add);
    val_add = val_add + 1.0f;
    return val_add;
}

//call by reference
//der Wert wird nicht über ein Return weiter gebeben, sondern über den Parameter selbst
//Parameter als Pointer deklarieren
//Speicheradrsse von &val_main wird in dem lokalen Pointer *val_sub abgespeichert
void sub(float *val_sub)
{
    printf("Memory Adress of val_sub: %p\n", &val_sub);
    *val_sub = *val_sub - 1.0f;
}

int main()
{
    float val_main = 0.0f;
    printf("Memory Adress of val_main: %p\n", &val_main);

    printf("%f\n", val_main);
    val_main = add(val_main);
    printf("%f\n", val_main);
    sub(&val_main);
    printf("%f\n", val_main);

    return 0;
}
