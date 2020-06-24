/*
    JTSK-320111
    a6_p3.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>

// function definition
int count_lower(char *str)
{
    int i = 0, count = 0;

    // looping until '\n' and checking if it is lowercase
    while(*(str + i) != '\n')
    {
        if(islower(*(str + i)))
        {
            count += 1;
        }
        ++i;
    }

    return count;
}

int main()
{
    while(1)
    {
        char str[51];

        // getting the string from the user
        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);

        // checking if the string is empty
        if (*(str) == '\n')
        {
            break;
        }

        // calling the function and printing the result
        printf("Number of lowercase=%d\n", count_lower(str));
    }

    return 0;
}
