#include <stdio.h>

typedef enum FriendshipOrigin
{
    FriendshipOrigin_SCHOOL,
    FriendshipOrigin_FAMILIY,
    FriendshipOrigin_OTHER,
} FriendshipOrigin_t;

typedef struct Date
{
    unsigned int day;
    unsigned int month;
    unsigned int year;
} Date_t;

typedef struct Friend
{
    char name[50];
    char prename[50];
    Date_t birthday;
    FriendshipOrigin_t origin;
} Freind_t;

void print_date(Date_t *date)
{
    printf("Birthday: %u.%u.%u\n", date->day, date->month, date->year);
}

void print_friend(Freind_t *friend)
{
    printf("Prename & Name: %s, %s\n", friend->name, friend->prename);
    print_date(&friend->birthday);

    switch (friend->origin)
    {
    case FriendshipOrigin_SCHOOL:
    {
        printf("I know him/she from school\n");
        break;
    }
    case FriendshipOrigin_FAMILIY:
    {
        printf("I know him/she from familiy\n");
        break;
    }
    case FriendshipOrigin_OTHER:
    {
        printf("I know him/she from somewhere else\n");
        break;
    }
    default:
        break;
    }

    printf("\n");
}

int main()
{
    Freind_t Cordula = {.name = "Grün",
                        .prename = "Cordula",
                        .birthday = {.year = 1988, .month = 4, .day = 21},
                        .origin = FriendshipOrigin_FAMILIY};
    Freind_t Peter = {.name = "Müller",
                      .prename = "Peter",
                      .birthday = {.year = 1956, .month = 3, .day = 15},
                      .origin = FriendshipOrigin_SCHOOL};
    Freind_t Hans = {.name = "Sapei",
                     .prename = "Hans",
                     .birthday = {.year = 1967, .month = 8, .day = 29},
                     .origin = FriendshipOrigin_OTHER};
    Freind_t friend_book[] = {Cordula, Peter, Hans};

    print_friend(&friend_book[0]);
    print_friend(&friend_book[1]);
    print_friend(&friend_book[2]);

    return 0;
}
