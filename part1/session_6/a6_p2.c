/*
    JTSK-320111
    a6_p2.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

//function definition
void divby5(float arr[], int size)
{
    int i = 0;
    printf("Before:\n");
    //looping over the elements of the array
    while(i < size)
    {
        printf("%.3f ", arr[i]);
        i++;
    }
    printf("\nAfter:\n");


    i = 0;
    //looping over the elements of the array
    while(i < size)
    {
        printf("%.3f ", arr[i] / 5);
    i++;
    }
    printf("\n");
}

int main()
{
    //declaring and initializing the array and the size int
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int n = 6;

    //calling the function
    divby5(arr, n);

    return 0;
}
