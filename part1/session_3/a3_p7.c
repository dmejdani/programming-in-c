/*
    JTSK-320111
    a3_p7.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char ch;
    int n;
    /*Getting the input values from the user*/
    scanf("%c", &ch);
    scanf("%d", &n);

    /*Going from i = 0 until i = n*/
    int i = 0;
    while (i <= n)
    {
        printf("%c\n", ch - i);
        i++;
    }
    return 0;
}

