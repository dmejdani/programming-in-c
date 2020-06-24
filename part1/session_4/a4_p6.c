/*
    JTSK-320111
    a4_p6.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

//defining the function
double sum25(double v[], int n)
{
    //checking for the n
    if (n < 6)
    {
        printf("One or both positions are invalid\n");

        return -111;
    }

    double sum = v[2] + v[5];
    return sum;
}

int main()
{
    double v[20], x;
    int n, idx;
    scanf("%d", &n);
    //condition of n
    if (n < 6)
    {
        sum25(v, n);
    }

    else
    {
        //for valid n we get n value from the input and calculate the sum with the function
        for (idx = 0; idx < n; ++idx)
        {
            scanf("%lf", &x);
            v[idx] = x;
        }

        printf("sum=%lf\n", sum25(v, n));
    }

    return 0;
}
