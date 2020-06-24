/*
    JTSK-320112
    a2_p1.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    // getting the size of the list
    int size, i;
    scanf("%d", &size);

    // storing the values
    float array[size];
    for (i = 0; i < size; i++)
    {
        scanf("%f", &array[i]);
    }

    // looping over the list and printing the count until negative value
    for (i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            printf("Before the first negative value: %d elements\n", (int)(&array[i] - array));
        }
    }
    return 0;
}
