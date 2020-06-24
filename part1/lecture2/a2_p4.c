/*
    JTSK-320112
    a2_p4.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// function for reading and storing the matrices
int*** readarray(int n, int m, int p)
{
    // dynamically allocating the multidimensional array
    int ***array1;
    array1 = (int ***)malloc(sizeof(int **) * n);
    if (array1 == NULL)
    {
        printf("Memory allocation error!\n");
        exit(1);
    }
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        array1[i] = (int **)malloc(sizeof(int*) * m);
        if (array1[i] == NULL)
        {
            printf("Memory allocation error!\n");
            exit(1);
        }

        for (j = 0; j < m; j++)
        {
            array1[i][j] = (int *)malloc(sizeof(int) * p);
            if (array1[i][j] == NULL)
            {
                printf("Memory allocation error!\n");
            }
        }
    }

    // storing the values into the allocated memory
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            for (k = 0; k < p; k++)
            {
                scanf("%d", &array1[i][j][k]);
            }
        }
    }

    return array1;
}

// function for printing the planes parallel to the XOY
void printXOY(int ***A, int n, int m, int p)
{
    int i, j, k;

    // starting the loop with the depth dimension
    for (i = 0; i < p; i++)
    {
        printf("Section %d:\n", i + 1);
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < m; k++)
            {
                printf("%d ", A[j][k][i]);
            }
            printf("\n");
        }
    }
}


int main()
{
    // getting the dimensions of the array
    int n, m, p, ***A;
    scanf("%d %d %d", &n, &m, &p);

    // reading and storing the multidimensional array
    A = readarray(n, m, p);

    // printing the planes parallel to the XOY
    printXOY(A, n, m, p);

    // freeing the multidimensional array
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            free(A[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        free(A[i]);
    }

    free(A);

    return 0;
}
