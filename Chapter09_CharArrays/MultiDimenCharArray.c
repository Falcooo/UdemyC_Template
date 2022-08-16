#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **createFriendBook(unsigned int number_friends)
{
    char **friends = (char **)malloc(number_friends * sizeof(char *));

    if (friends == NULL)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < number_friends; i++)
    {
        friends[i] = (char *)malloc(20 * sizeof(char));
    }

    return friends;
}

char **freeFriendBook(char **friends, unsigned int num_friends)
{
    for (unsigned int i = 0; i < num_friends; i++)
    {
        free(friends[i]);
    }

    free(friends);
    return NULL;
}

int main()
{
    unsigned int number_friends = 3;
    char **friends = createFriendBook(number_friends);

    //Zeichenkette in eine andere Zeichenkette kopieren
    //Text + max. Größe angeben
    strncpy(friends[0], "Cordula Grün", 20);
    strncpy(friends[1], "Peter Müller", 20);
    strncpy(friends[2], "Hans Sapei", 20);

    //Zeicheketten ausgeben
    for (unsigned int i = 0; i < number_friends; i++)
    {
        printf("Name der Freund*innen: %s\n", friends[i]);
    }
    printf("\n");

    //an einen bestehenden String etwas dran hängen
    //Zielstring, Zusatz, max. Zeichen
    //!es wird kein neuer String erstellt!
    strncat(friends[0], " Dr.", 5);
    printf("An einenm bestehen String etwas dran hängen. Beispiel %s.\n", friends[0]);
    printf("\n");

    //Länge eines Strings ausgeben
    long unsigned int length0 = strlen(friends[0]);
    long unsigned int length1 = strlen(friends[1]);
    long unsigned int length2 = strlen(friends[2]);

    printf("Länge des Strings %s: %lu\n", friends[0], length0);
    printf("Länge des Strings %s: %lu\n", friends[1], length1);
    printf("Länge des Strings %s: %lu\n", friends[2], length2);
    printf("\n");

    //Strings miteinander vergleichen
    // 0 = Strings sind gleich
    // positiver oder negativer Wert = Strings sind unterschiedlich
    int compare0 = strncmp(friends[0], friends[1], 20);
    int compare1 = strncmp(friends[1], friends[2], 20);
    int compare2 = strncmp(friends[2], friends[0], 20);
    printf("Wert des Vergleichs: %d\n", compare0);
    printf("Wert des Vergleichs: %d\n", compare1);
    printf("Wert des Vergleichs: %d\n", compare2);
    printf("\n");

    //nach einem Char in einem String suchen
    //strrchr = an der letzten vorkommenden Stelle
    //Ausgabe: die restlichen Zeichen ab dem gefundenen Zeichen
    char *found_char0 = strchr(friends[0], 'r');
    char *found_char1 = strrchr(friends[0], 'r');

    if (found_char0 != NULL)
    {
        printf("Nach dem 1. 'r' in %s suchen: %s\n", friends[0], found_char0);
    }

    if (found_char1 != NULL)
    {
        printf("Nach dem letzten 'r' in %s suchen: %s\n", friends[0], found_char1);
    }
    printf("\n");

    //Substring: in einem String einen Teil suchen
    //Ausgabe: alles ab dem gefunden Wert ausgeben
    char *found_substring = strstr(friends[0], "Gelb");
    if (found_substring != NULL)
    {
        printf("%s\n", found_substring);
    }
    printf("\n");

    //Token = selbstdefinierte Teilstrings/Characters (Fragezeichen, Leerzeichen, ...)
    char *token = strtok(friends[0], " ");

    if (token != NULL)
    {
        //Ausgabe: von vorne wird bist zu dem 1. gefunden Token alles ausgegeben
        printf("Nach dem 1. Token (Leerzeichen) suchen: %s\n", token);
    }

    friends = freeFriendBook(friends, number_friends);
    return 0;
}
