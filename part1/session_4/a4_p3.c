/*
    JTSK-320111
    a4_p3.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

/*function definition*/
float to_pounds(int kg, int g)
{
    return (kg * 2.2 + g * .0022);
}

int main()
{
    int kg, g;
    /*Getting the input from the user*/
    scanf("%d", &kg);
    scanf("%d", &g);

    /*calling the function and printing the converted value*/
    printf("Result of conversion: %f\n", to_pounds(kg, g));
    return 0;
}
