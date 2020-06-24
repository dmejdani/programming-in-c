/*
    JTSK-320111
    a3_p6.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    float x;
    int n;

    /*Getting the float input from the user*/
    scanf("%f", &x);

    /*Checking the input if it is valid*/
    while (1)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            break;
        }
        printf("Input is invalid, reenter value\n");
    }

    /*Going from 1 to n and printing the float n times*/
    int i = 1;
    while (i <= n)
    {
        printf("%f\n", x);
        i++;
    }
    return 0;
}
