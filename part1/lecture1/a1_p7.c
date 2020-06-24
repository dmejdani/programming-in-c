/*
    JTSK-320112
    a1_p7.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

// defining the function
unsigned char set3bits(unsigned char ch, int a, int b, int c)
{
    // setting the bits to one
    ch |= (int)pow(2, a);
    ch |= (int)pow(2, b);
    ch |= (int)pow(2, c);

    return ch;
}

int main()
{
    // getting the character and the positions of the bits
    char ch;
    int a, b, c;
    scanf("%c %d %d %d", &ch, &a, &b, &c);
    // printing the decimal and binary representation
    printf("The decimal representation is: %d\n", ch);
    printf("The binary representation is: ");
    // 8 bit character
    for (int i = 7 ; i >= 0 ;  i--)
    {
        // printing using binary operations
        printf("%d", (ch & (int)pow(2, i)) >> i);
    }

    printf("\n");

    // setting the bits to 1
    ch = set3bits(ch, a, b, c);

    // printing after setting to 1
    printf("After setting the bits: ");
    // 8 bit character
    for (int i = 7 ; i >= 0 ;  i--)
    {
        // printing using binary operations
        printf("%d", (ch & (int)pow(2, i)) >> i);
    }

    printf("\n");

    return 0;
}
