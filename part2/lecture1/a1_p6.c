/*
    JTSK-320112
    a1_p6.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

int main() {
    // getting the character from the input
    char c;
    scanf("%c", &c);

    // printing the decimal and binary value
    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");

    // 8 bit character
    for (int i = 7 ; i >= 0 ;  i--)
    {
        // printing using binary operations
        printf("%d", (c & (int)pow(2, i)) >> i);
    }

    printf("\n");

    return 0;
}
