/*
    JTSK-320111
    a4_p2.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

/*function definition*/
float convert(int cm)
{
    return cm / 100000.;
}

int main()
{
    /*Getting the value from the user*/
    int value;
    scanf("%d", &value);
    /*Calling the function and printing the converted result*/
    printf("Result of conversion: %f\n", convert(value));
    return 0;
}
