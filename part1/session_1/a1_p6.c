/*
JTSK-320111
problem 1.6.c
Desar Mejdani
d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char c = 'F';
    printf("The third character after %c is %c and its ASCII code is %d.\n", c, c + 3, c + 3);

    /*char c = 'F';
    int ascii = c;
    ascii += 3;
    c = ascii;
    printf("%c\n", c);*/
    return 0;
}
