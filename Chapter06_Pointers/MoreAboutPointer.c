#include <stdio.h>

void do_something(double param_in, double *param_out1, double *param_out2)
{
    //Wert von argument_out1 & argument_2 sind an der Speicheradresse
    //&argument_out1 & &argument_out2 abgespeichert
    //der Pointer zeigt auf die Adresse und ließt den dort liegenden Wert aus
    *param_out1 += param_in;
    *param_out2 += param_in;
}

int main()
{
    double argument_in = 1.0;
    double argument_out1 = 2.0;
    double argument_out2 = 3.0;

    //in der Funktion muss eine Adresse übergeben werden, da in der
    //Parameterleiste Pointer erwartet werden
    do_something(argument_in, &argument_out1, &argument_out2);

    printf("argument_out1: %lf\n", argument_out1);
    printf("\n");
    printf("argument_out2: %lf\n", argument_out2);
    return 0;
}
