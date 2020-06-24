/*
    JTSK-320111
    a3_p2.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main ()
{
    int a;
    scanf("%d", &a);
    /*Checking if it is divisible by 2 and 7*/
    if ((a % 2 == 0) && (a % 7 == 0))
    {
        printf("The number is divisible by 2 and 7\n");
    }
    /*Any other case*/
    else
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}
