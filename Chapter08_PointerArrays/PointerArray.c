//geht nicht auf dem Stack, wird auf dem Heap angelegt
//Compiletime: alles was bis zu dem Zeitpunkt besteht, bis das Programm ausgeführt wird
//Runtime: Dinge, die erst ab der Ausführung bekannt sind

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int length = 3;

    //malloc: Speicher reservieren
    //malloc(Größe an Bites übergeben)
    int *array = (int *)malloc(length * sizeof(int));
    for (unsigned int i = 0; i < length; i++)
    {
        array[i] = i;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }

    //free: Speicherplatz freigeben
    //Löschen des Speichers, auf denen das Array gezeigt hat
    //nach free(array) zeigt das array auf einen Speicher, denen es nicht mehr gehört!
    //deswegen array = NULL - der Pointer zeigt auf nichts mehr
    free(array);
    array = NULL;

    return 0;
}
