#include <stdio.h>
#include <string.h>

#include "Lib.h"

char PROJECT_DIR[] = "/Users/chiara/Desktop/Udemy/UdemyC_Template/";


int main()
{
    char input_filepath[100] = {'\0'};
    strncpy(input_filepath, PROJECT_DIR, 100);
    strncat(input_filepath, "Chapter11_Files/UnknownFileSizeRead/InputData.txt", 50);

    //Fileobjekt erstellen
    FILE *fp = fopen(input_filepath, "r");

    if (fp == NULL)
    {
        return 1;
    }

    int line_size = 100;
    char line[100] = {'\0'};
    //File get String
    while (fgets(line, line_size, fp) != NULL)
    {
        //array to integer
        int value = atoi(line);
        printf("%s", line);
        printf("%d\n\n", value);
    }
    fclose(fp);
    return 0;
}
