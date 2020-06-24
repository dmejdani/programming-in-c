/*
    JTSK-320111
    a6_p6.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

// function definition
void countdown(int n)
{
    // recursive until n = 1
    if (n > 0)
    {
        printf("%d\n", n);
        // calling itself
        countdown(n - 1);
    }
}


int main()
{
    int n;

    // getting the input from the user
    printf("Enter a decimal: ");
    scanf("%d", &n);

    // calling the function
    countdown(n);

    return 0;
}
