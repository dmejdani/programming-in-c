/*
    JTSK-320111
    a6_p4.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//function definition
void divby5(float arr[], int size)
{
    // dividing by reference
    int i = 0;
    while (i < size)
    {
        arr[i] = arr[i] / 5;
        ++i;
    }
}

int main()
{
    float *arr;
    int n, i = 0;

    // getting the number of elements
    printf("Enter number of elements\n");
    scanf("%d", &n);

    // dynamically allocating array
    arr = (float*)malloc(sizeof(float) * n);

    // checking if allocation was correctly done
    if (arr == NULL)
    {
        printf("Not allocated correctly\n");
        exit(1);
    }

    // storing the elements in the array
    printf("Enter elements of the array\n");
    while (i < n)
    {
        scanf("%f", &arr[i]);
        ++i;
    }

    // printing before division
    printf("Before:\n");
    i = 0;
    while (i < n)
    {
        printf("%.3f ", arr[i]);
        i++;
    }

    // calling the function
    divby5(arr, n);

    // printing after division
    printf("\nAfter:\n");
    i = 0;
    while (i < n)
    {
        printf("%.3f ", arr[i]);
        ++i;
    }
    printf("\n");

    return 0;
}
