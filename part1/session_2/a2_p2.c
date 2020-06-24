/*
    JTSK-320111
    a2 p2.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char list1[100];
    char c;
    fgets(list1, sizeof(list1), stdin);
    sscanf(list1, "%c", &c);

    printf("character=%c\n", c);
    printf("decimal=%d\n", c);
    printf("octal=%o\n", c);
    printf("hexadecimal=%x\n", c);

    return 0;
}
