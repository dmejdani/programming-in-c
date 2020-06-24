/*
    JTSK-320111
    a3_p3.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main ()
{

    char c;
    scanf("%c", &c);

    /*Checking if it is a digit*/
    if (c >= 48 && c <= 57)
    {
        printf("%c is a digit\n", c);
    }
    /*Checking if it is a letter*/
    else if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        printf("%c is a letter\n", c);
    }
    /*Any other case*/
    else
    {
        printf("%c is some other symbol\n", c);
    }

    return 0;
}
