/*
    JTSK-320111
    a5_p2.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    // Getting the input string
    char list[50];
    fgets(list, sizeof(list), stdin);

    int i;

    // Iterating until we reach character \0
    for (i = 1; list[i] != '\0'; i++)
    {
        //printing for cases when i is odd or even
        if (i % 2 == 0)
        {
            printf(" %c\n", list[i - 1]);
        }

        else
        {
            printf("%c\n", list[i - 1]);
        }
    }
    return 0;
}
