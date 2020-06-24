/*
    JTSK-320111
    a6_p1.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

//function definition
void function(int n, char c)
{
    int i, j;
    while (i < n)
    {
        for (j = 0; j < n - i; j++)
        {
            printf("%c", c);
        }
        printf("\n");
        i++;
    }
}

int main()
{
    int n;
    char c;

    // getting the input, getchar() to ignore the \n
    scanf("%d", &n);
    getchar();
    scanf("%c", &c);

    //calling the function
    function(n, c);

    return 0;
}
