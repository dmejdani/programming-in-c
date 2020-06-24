/*
    JTSK-320111
    a5_p7.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

// function definition; prints the array
void printall(int arr[][30], int n)
{
    int i = 0, j = 0;

    printf("The entered matrix is:\n");
    // two loops which cover both dimensions
    while (i < n)
    {
        j = 0;
        while(j < n)
        {
            printf("%d ", arr[i][j]);
            ++j;
        }
        printf("\n");
        ++i;
    }
}

// function definition; prints elements under the secondary diagonal
void printlowsd(int arr[][30], int n)
{
    int i = 0, j = 0;

    printf("Under the secondary diagonal:\n");

    // two loops which cover both dimensions
    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            // sum of i and j must be >= n for the element arr[i][j] to be under the secondary diagonal matrix
            if (i + j >= n)
            {
                printf("%d ", arr[i][j]);
            }
            ++j;
        }
        ++i;
    }
    printf("\n");
}

int main()
{
    int arr[30][30], n, i = 0, j = 0;

    // getting the number of rows and cols
    scanf("%d", &n);

    // getting the values of the array on both dimesions
    while (i < n)
    {
        j = 0;
        while (j < n)
        {
        scanf("%d", &arr[i][j]);
        ++j;
        }
        ++i;
    }

    // calling the functions
    printall(arr, n);
    printlowsd(arr, n);

    return 0;
}
