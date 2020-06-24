/*
    JTSK-320112
    a1_p4.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#define INTERMEDIATE
#include <stdio.h>

int main()
{
    // getting the length of the vector
    int n, i, result = 0;
    scanf("%d", &n);

    // storing the values into vectors
    int vec1[n], vec2[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vec1[i]);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vec2[i]);
    }

    // first conditional compilation
    #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    #endif

    // calculating the result and printing if the macro is defined
    for (i = 0; i < n; i++)
    {
        result += vec1[i] * vec2[i];
        #ifdef INTERMEDIATE
            printf("%d\n", vec1[i] * vec2[i]);
        #endif
    }

    printf("The scalar product is: %d\n", result);
    return 0;
}
