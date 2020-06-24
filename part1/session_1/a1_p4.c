/*
JTSK-320111
problem 1.4.c
Desar Mejdani
d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int x = 17;
    int y = 4;
    printf("x=%d\ny=%d\n", x, y);

    int sum = x + y;
    printf("sum=%d\n", sum);

    int product = x * y;
    printf("product=%d\n", product);

    int difference = x - y;
    printf("difference=%d\n", difference);

    float division = (float)x / y;
    printf("division=%f\n", division);

    int remainder = x % y;
    printf("remainder of division=%d\n", remainder);

    return 0;
}
