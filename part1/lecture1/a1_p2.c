/*
    JTSK-320112
    a1_p2.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
// defining the macro with argument
#define LASTBIT(A) A & 1

int main() {
    // getting the character from the input
    unsigned char c;
    scanf("%c", &c);

    // printing and 'calling' the macro
    printf("The decimal representation is: %d\n", c);
    printf("The least significant bit is: %i\n", LASTBIT(c));
    return 0;
}
