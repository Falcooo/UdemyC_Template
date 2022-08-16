#include <stdio.h>
#include <stdlib.h>

//Malloc = Speicherreservierung - ohne Initialisierung
//Calloc = Speicher für ein Array reservieren, bei bekannter Anzahl & Größe + Speicher wird zu 0 initialisiert
//Realloc = bereits bestehender Pointer/Speicherbereich übergeben, um eine neue Speichergröße zu reservieren
int main()
{
    //Calloc
    int length = 4;
    int *arr = (int *)calloc(length, sizeof(int));

    for (int i = 0; i < length; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }

    //Realloc - Speicherplatz erweitern/verkleinern
    length = 2;
    arr = (int *)realloc(arr, length * sizeof(int));
    printf("\n");

    for (int i = 0; i < length; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }

    return 0;
}
