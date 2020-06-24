/*
    JTSK-320112
    a5_p2.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include <math.h>

int main()
{
    struct stack s;
    // setting the count to 0
    s.count = 0;
    int decimal, remainder;
    scanf("%d", &decimal);

    // only positive decimals allowed
    if (decimal < 0)
    {
        printf("Not a valid number.\n");
        exit(1);
    }


    printf("The binary representation of %d is ", decimal);

    // if the decimal == 0
    if (decimal == 0)
    {
        push(&s, decimal);
        empty(&s);
        return 0;
    }

    // all other cases
    while (decimal > 0)
    {
        remainder = decimal % 2;
        decimal = floor(decimal / 2);
        push(&s, remainder);
    }

    // emptying the stack and printing the values
    empty(&s);

    return 0;
}
