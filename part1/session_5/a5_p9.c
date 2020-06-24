/*
    JTSK-320111
    a5_p9.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// function definition
int pordminmax(int arr[], int n)
{
    int max, min, i = 1;

    max = arr[0];
    min = arr[0];

    // looping over the elements of the array from the second to the end and checking for min and max
    while (i < n)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }

    ++i;
    }

    return max * min;
}

int main()
{
    int *arr, n, i;

    // Getting the number of elements from the input
    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    // dynamically allocating the array
    arr = (int*) malloc(sizeof(int) * n);

    // checking if it was allocated correctly
    if (arr == NULL)
    {
    printf("Not successfully allocated\n");
        exit(1);
    }

    printf("Enter the elements\n");

    // Storing the values of the elements in the array
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    // calling the function and printing the result
    printf("ProductMinMax=%d\n", pordminmax(arr, n));

    // freeing the memory of arr[]
    free(arr);

    return 0;
}
