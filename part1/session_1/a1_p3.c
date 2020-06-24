/*
JTSK-320111
problem 1.3.c
Desar Mejdani
d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5;
    result = a / b;
    printf("The result is %f\n", result);
    /* The compile error comes from the fact that result is a float data type while the placeholder in the text we want to print is for a integer. */
    /* To print the correct result we have to change the data type of b to float, as it should be. Thus, the result is also a float of a correct value. */
    return 0;
}
