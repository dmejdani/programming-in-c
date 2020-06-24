/*
    JTSK-320111
    a5_p1.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>


int main()
{
    float low, high, incr;

    //Getting the input from the user
    scanf("%f", &low);
    scanf("%f", &high);
    scanf("%f", &incr);

    //calculating the number of steps
    int steps = (high - low) / incr;
    int i;

    //iterating over the number of steps
    for (i = 0; i <= steps; i++)
    {
        float x;
        x = low + (i * incr);
        printf("%f %f %f\n", x, M_PI * x * x, 2 * M_PI * x);
    }
    return 0;
}
