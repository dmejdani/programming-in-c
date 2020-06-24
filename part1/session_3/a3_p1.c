/*
    JTSK-320111
    a3_p1.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    int i = 8;
    while (i >= 4)
    {
        printf("i is %d\n", i);
        i--;
    }
    /*The while section did not have the braces and the i-- would never make i smaller than 4, which made the program to run in a infinite loop*/
    printf("That's it.\n");
    return 0;
}
