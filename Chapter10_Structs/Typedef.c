#include <stdio.h>

//Aliasnamen für eine Struktur vergeben
typedef struct Friend
{
    char name[50];
    char prename[50];
    unsigned int day;
    unsigned int month;
    unsigned int year;
} Friend_t;

//typedef struct Friend Friend_t;

void print_friend(Friend_t *friend)
{
    printf("Nachname & Vorname: %s %s\n", friend->name, friend->prename);
    printf("Geburtstag: %u.%u.%u\n", friend->day, friend->month, friend->year);
    printf("\n");
}

int main()
{
    Friend_t Cordula = {.name = "Grün", .prename = "Cordula", .year = 1988, .month = 4, .day = 21};
    Friend_t Peter = {.name = "Müller", .prename = "Peter", .year = 1956, .month = 3, .day = 15};
    Friend_t Hans = {.name = "Sapei", .prename = "Hans", .year = 1967, .month = 8, .day = 29};
    Friend_t friend_book[] = {Cordula, Peter, Hans};

    print_friend(&friend_book[0]);
    print_friend(&friend_book[1]);
    print_friend(&friend_book[2]);

    return 0;
}
