/*
    JTSK-320111
    a3_p4.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main ()
{
    int n;
    /*Checking if the input is valid*/
    while (1)
    {
        scanf("%d", &n);

        if (n > 0)
        {
            break;
        }
    }
    /*Going from 1 to n and printing the number of hours for the corresponding i*/
    int i = 1;
    while (i <= n)
    {
        if (i == 1)
            printf("1 day = 24 hours\n");
        else
        {
            printf("%d days = %d hours\n", i, i * 24);
        }
        i++;

    }

    return 0;
}
