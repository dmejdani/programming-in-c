/*
    JTSK-320112
    a1_p5.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    // getting the character from the input
    unsigned char c;
    scanf("%c", &c);
    // printing on the fly the backward representation
    printf("The decimal representation is: %d\n", c);
    printf("The backwards binary representation is: ");
    while (c)
    {
        printf("%d", c & 1);
        c >>= 1;
    }
    // printing the newline at the end of the binary number
    printf("\n");

return 0;
}
