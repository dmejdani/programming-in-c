/*
    JTSK-320111
    a4_p8.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char one[100], two[200];

    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);

    //replacing the \n with \0
    one[strlen(one) - 1] = '\0';
    two[strlen(two) - 1] = '\0';

    //printing the lengths of strigs using strlen
    printf("length1=%u\n", (unsigned)strlen(one));
    printf("length2=%u\n", (unsigned)strlen(two));

    //making a copy of one so that we can recover after concatenation
    char one1[100];
    strcpy(one1, one);

    // concatenating using strcat
    printf("concatenation=%s\n", strcat(one, two));

    //recovering one
    strcpy(one, one1);

    //copying using strcpy
    char three[100];
    strcpy(three, two);
    printf("copy=%s\n", three);

    // comparing strings using strcmp with the three cases
    if (strcmp(one, two) == 0)
    {
        printf("one is equal to two\n");
    }

    else if (strcmp(one, two) < 0)
    {
        printf("one is smaller than two\n");
    }

    else
    {
        printf("one is larger than two\n");
    }

    //checing if c is contained in two
    char c;
    scanf("%c", &c);

    char *position;
    position = strchr(two, c);

    if (position == NULL)
    {
        printf("The character is not in the string\n");
    }
    else
    {
    printf("position=%d\n", (int)(position - two));
    }

    return 0;
}
