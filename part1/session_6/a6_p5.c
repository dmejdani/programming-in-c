/*
    JTSK-320111
    a6_p5.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// function definition
double dotp(double v1[], double v2[], int n)
{
    int i = 0;
    double result = 0;

    // looping until n - 1 and calculating the scalar product
    while (i < n)
    {
        result += (v1[i] * v2[i]);
        ++i;
    }

    return result;
}

// funtion definition
void maxmin(double v[], int n)
{
    int minidx, maxidx, i = 0;
    double min = v[0];
    double max = v[0];
    maxidx = i;
    minidx = i;

    // looping until n - 1; checking for max and min; saving the index of max and min
    while (i < n)
    {
        if (v[i] > max)
        {
            max = v[i];
            maxidx = i;
        }

        if (v[i] < min)
        {
            min = v[i];
            minidx = i;
        }
        ++i;
    }

    // printing the max and min values and their positions
    printf("The smallest = %f\n", min);
    printf("Position of smallest = %d\n", minidx);
    printf("The largest = %f\n", max);
    printf("Position of largest = %d\n", maxidx);
}

int main()
{
    double *v1, *v2;
    int n, i;

    // getting the number of elements
    scanf("%d", &n);

    // dynamically allocating memory for v1
    v1 = (double*)malloc(sizeof(double) * n);

    // checking if allocated correctly
    if (v1 == NULL)
    {
        printf("Not allocated correctly");
        exit(1);
    }

    // dynamically allocating memory for v1
    v2 = (double*)malloc(sizeof(double) * n);

    // checking if allocated correctly
    if (v2 == NULL)
    {
        printf("Not allocated correctly");
        exit(1);
    }

    // storing the values in v1 and v2
    i = 0;
    while (i < n)
    {
        scanf("%lf", &v1[i]);
        ++i;
    }

    i = 0;
    while (i < n)
    {
        scanf("%lf", &v2[i]);
        ++i;
    }

    // calling the functions and printing the results
    printf("Scalar product=%lf\n", dotp(v1, v2, n));
    maxmin(v1, n);
    maxmin(v2, n);

    // freeing the allocated spaces of the vectors
    free(v1);
    free(v2);

    return 0;

}
