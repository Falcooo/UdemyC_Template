#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int *p_d = &a; //Speicheradresse von a
    int *p_e = &b; //Speicheradresse von b
    int *p_f = &c; //Speicheradresse von c

    //2 * 2 + 3 * 3 = 13
    //13 wird in a gespeichert, da *p_d auf a zeigt (Zeile 9)
    *p_d = (2 * *p_e) + (3 * *p_f);

    p_d = &b; //p_d zeigt auf b
    p_f = &a; //p_f zeigt auf a

    //2 + 13 = 15
    //15 wird in b gespeichert
    *p_e = *p_d + *p_f;

    printf("a: %d\n", a);       //13
    printf("*p_d: %d\n", *p_d); //15
    printf("*p_e: %d\n", *p_e); //15
    printf("*p_f: %d\n", *p_f); //13
}
