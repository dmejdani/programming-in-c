/*
    JTSK-320111
    a5_p6.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// function definition
void find2max(int arr[], int n)
{
    // checking if the array has more than 2 elements
    if  (n > 2)
    {
        // signing the two greatest values as arr[0] and arr[1]
        int max1, max2, i = 2;

        // max1 >= max2
        max1 = arr[1];
        max2 = arr[0];
        if (max2 > max1)
        {
            max1 = max2;
            max2 = arr[1];
        }

        // looping over the elements of the array starting from the third element
        while (i < n)
        {
            /* replacing the first largest with the new largest, and the second largest with the old first largest */
            if (arr[i] > max1)
            {
                max2 = max1;
                max1 = arr[i];
            }
            /* replace the second largest with the new second largest. This will cover the case when the two greatest values of the array are the same integer. In that case first and second largest will be the same */
            else if (arr[i] > max2)
            {
                max2 = arr[i];
            }
            ++i;
        }

        printf("Two greatest: %d, %d\n", max1, max2);
    }
    // if the array only contains two values, these two will be printed
    if (n == 2)
    {
        printf("Two greatest: %d, %d\n", arr[0], arr[1]);
    }

}

int main()
{
    int* arr, how_many, i;

    // getting the number of integers
    printf("How many integers? ");
    scanf("%d", &how_many);

    // dynamically allocating array
    arr = (int*) malloc(sizeof(int) * how_many);

    // checking if the allocation was succesfull
    if (arr == NULL)
    {
        printf("Array was not allocated succesfully\n");
        exit(1);
    }

    // storing the elements in the array
    printf("Enter the integers:\n");
    for (i = 0; i < how_many; ++i)
    {
        scanf("%d", &arr[i]);
    }

    // calling the function
    find2max(arr, how_many);

    // freeing the allocated space of the array
    free(arr);

    return 0;
}
