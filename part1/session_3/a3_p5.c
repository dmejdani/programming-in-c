/*
    JTSK-320111
    a3_p5.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main ()
{
    int n;
    /*Checking if the input is valid or not*/
    while (1)
    {
        scanf("%d", &n);

        if (n > 0)
        {
            break;
        }
        printf("Input is invalid, reenter value\n");
    }
    /*Going from 1 to n and printing the number of hours for the corresponding i days*/
    int i;
    for (i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            printf("1 day = 24 hours\n");
        }
        else
        {
            printf("%d days = %d hours\n", i, i * 24);
        }
    }

    return 0;
}
