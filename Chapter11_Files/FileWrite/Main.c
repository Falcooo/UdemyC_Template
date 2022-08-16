#include <stdio.h>
#include <string.h>

#include "Lib.h"

char PROJECT_DIR[] = "/Users/chiara/Desktop/Udemy/UdemyC_Template/";


int main()
{
    char input_filepath[100] = {'\0'};
    strncpy(input_filepath, PROJECT_DIR, 100);
    strncat(input_filepath, "Chapter11_Files/FileRead/InputData.txt", 50);

    //Output Datei: wird von dem Programm selbst erstellt
    char output_filepath[100] = {'\0'};
    strncpy(output_filepath, PROJECT_DIR, 100);
    strncat(output_filepath, "Chapter11_Files/FileWrite/OutputData.txt", 50);

    FILE *fp = fopen(input_filepath, "r");

    if (fp == NULL)
    {
        return 1;
    }

    Vector v1 = {.data = createArray(5, 0), .length = 5};

    for (unsigned int i = 0; i < v1.length; i++)
    {
        fscanf(fp, "%d", &v1.data[i]);
    }

    fclose(fp);

    for (unsigned int i = 0; i < v1.length; i++)
    {
        v1.data[i] -= 1;
        printf("%d\n", v1.data[i]);
    }

    //Datei öffnen, mit dem Befehlt write (schreiben)
    FILE *fp_out = fopen(output_filepath, "w");

    if (fp_out == NULL)
    {
        return 1;
    }

    for (unsigned int i = 0; i < v1.length; i++)
    {
        //fprintf = Fileobjekt übergeben
        fprintf(fp_out, "%d\n", v1.data[i]);
    }

    fclose(fp_out);

    freeArray(v1.data);

    return 0;
}
