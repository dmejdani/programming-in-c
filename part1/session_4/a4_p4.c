/*
    JTSK-320111
    a4_p4.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

//Defining the function
void print_form(int n, int m, char c)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        int j;
        for (j = 0; j < m + i; ++j)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main()
{
    //getting the input from the user and calling the function
    int n, m;
    char c;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf(" %c", &c);
    print_form(n, m, c);

    return 0;
}
