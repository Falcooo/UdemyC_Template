#include <stdio.h>

/***
 * gebündelt Informationen an einer Stelle abspeichern
 * Struktur = eigener Datentyp
 */

struct Friend
{
    //Attribute für die Struktur
    char name[50];
    char prename[50];
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

//durch den * -> Call by Reference
//-> anstelle .
void print_friend(struct Friend *friend)
{
    printf("Nachname & Vorname: %s %s\n", friend->name, friend->prename);
    printf("Geburtstag: %u.%u.%u\n", friend->day, friend->month, friend->year);
    printf("\n");
}

int main()
{
    //.name kann auch jeweils weggelassen werden - wird jedoch irgendwann unübersichtlich
    struct Friend Cordula = {.name = "Grün", .prename = "Cordula", .year = 1988, .month = 4, .day = 21};
    struct Friend Peter = {.name = "Müller", .prename = "Peter", .year = 1956, .month = 3, .day = 15};
    struct Friend Hans = {.name = "Sapei", .prename = "Hans", .year = 1967, .month = 8, .day = 29};
    //Strukturtypen in einem Array abpeichern
    struct Friend friend_book[] = {Cordula, Peter, Hans};

    print_friend(&friend_book[0]);
    print_friend(&friend_book[1]);
    print_friend(&friend_book[2]);

    // Strukturinhalt über das Array ausgeben
    // printf("Nachname: %s\n", friend_book[0].name);
    // printf("Vorname: %s\n", friend_book[0].prename);
    // printf("Geburtsjahr: %u\n", friend_book[0].year);
    // printf("Monat: %u\n", friend_book[0].month);
    // printf("Tag: %u\n", friend_book[0].day);
    // printf("\n");

    // Strukturinhalt über den Namen ausgeben
    // printf("Nachname: %s\n", Peter.name);
    // printf("Vorname: %s\n", Peter.prename);
    // printf("Geburtsjahr: %u\n", Peter.year);
    // printf("Monat: %u\n", Peter.month);
    // printf("Tag: %u\n", Peter.day);
    // printf("\n");


    return 0;
}
