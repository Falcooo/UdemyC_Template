#include "Lib.h"
#include <stdio.h>
#include <string.h>

char PROJECT_DIR[] = "/Users/chiara/Desktop/Udemy/UdemyC_Template/";
int main()
{
    char output_filepath[100] = {'\0'};
    strncpy(output_filepath, PROJECT_DIR, 100);
    strncat(output_filepath, "Chapter11_Files/UnknownFileSizeWrite/OutputData.txt", 50);

    //Fileobjekt erstellen im Schreibemodus
    FILE *fp = fopen(output_filepath, "w");

    if (fp == NULL)
    {
        return 1;
    }

    int data[5] = {1, 2, 3, 4, 5};

    for (unsigned int i = 0; i < 5; i++)
    {
        //alle Werte  mit \0 initialisieren
        char temp[50] = {'\0'};
        //in die temporäre Varaible den Inhalt zwischenspeichern, der in die Datei geschrieben werden soll
        sprintf(temp, "Value: %d - LineEnd\n", data[i]);
        //den Inhalt von temp in die Datei fp einlesen
        fputs(temp, fp);
    }

    fclose(fp);
    return 0;
}
