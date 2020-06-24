/*
    JTSK-320111
    a3_p8.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    //getting the input from the user
    char c;
    int n, i = 0;
    double array[100];


    scanf("%c", &c);
    scanf("%d", &n);

    //setting n values into the array[100]
    while (i < n)
    {
        scanf("%lf", &array[i]);
        i++;
    }

    //all possible cases of the character with switches
    switch (c)
    {
        case 's':
        {
        double sum = 0.;
        for (i = 0; i < n; i++)
        {
            sum += array[i];
        }
        printf("Sum=%lf\n", sum);
        break;}

        case 'p':
        {
        for (i = 0; i < n; i++)
        {
            printf("%lf\n", array[i]);
        }
        break;
        }

        case 't':
        {
        for (i = 0; i < n; i++)
        {
            printf("%lf\n", array[i] * 9 / 5 + 32);
        }
        break;
        }

        default:
        {
        double sum = 0.;
        for (i = 0; i < n; i++)
        {
            sum += array[i];
        }
        printf("Average=%lf\n", sum / n);
        }
    }
    return 0;
}
