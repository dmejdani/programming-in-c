/*
    JTSK-320112
    a2_p3.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// function for reading and storing the matrices
int** readarray(int n, int m)
{
    // dynamically allocating the multidimensional array
    int **array1;
    array1 = (int **)malloc(sizeof(int *) * n);
    if (array1 == NULL)
    {
        printf("Memory allocation error!\n");
        exit(1);
    }
    int i, j;
    for (i = 0; i < n; i++)
    {
        array1[i] = (int *)malloc(sizeof(int) * m);
        if (array1[i] == NULL)
        {
            printf("Memory allocation error!\n");
            exit(1);
        }
    }

    // storing the values into the allocated memory
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    return array1;
}

// computing the matrix product of two matrices and returning the product into a dynamically allocated multidimensional array
int** product(int **A, int **B, int n, int m, int p)
{
    int i, j, k;

    int **result;
    result = (int **)malloc(sizeof(int *) * n);
    if (result == NULL)
    {
        printf("Memory allocation error!\n");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        result[i] = (int *)malloc(sizeof(int) * p);
        if (result[i] == NULL)
        {
            printf("Memory allocation error!\n");
            exit(1);
        }
    }

    // calculation of the product
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            int sum = 0;
            for (k = 0; k < m; k++)
            {
                sum += A[i][k] * B[k][j];
            }
            result[i][j] = sum;
        }
    }
    return result;
}


// printing a matric in a human readable form
void printmatrix(int **A, int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // getting the indeces of the dimensions of the matrices
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);


    // initializing the double pointers
    int **A, **B, **C;
    // reading the arrays
    A = readarray(n, m);
    B = readarray(m, p);
    // the result of the product
    C = product(A, B, n, m, p);
    // printing the results
    printf("Matrix A:\n");
    printmatrix(A, n, m);
    printf("Matrix B:\n");
    printmatrix(B, m, p);
    printf("The multiplication result AxB:\n");
    printmatrix(C, n, p);

    // freeing the allocated memory
    int i;
    for (i = 0; i < n; i++)
    {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }

    free(A);
    free(B);
    free(C);

    return 0;
}
