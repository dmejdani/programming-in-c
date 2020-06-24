/*
    JTSK-320111
    a5_p12.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

// function definition
void replaceAll(char *str, char c, char e)
{
    int i = 0;

    // looping over the string until '\n' and changing the character by reference if any
    while (str[i] != '\n')
    {
        if (*(str + i) == c)
        {
            *(str + i) = e;
        }
        ++i;
    }
}

int main()
{
    char str[91], c, e;
    char stop[10] = "stop\n";

    while (1)
   {
        // getting the string
        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);

        // checking if the string is 'stop\n'
        if (strcmp(str, stop) == 0)
        {
            break;
        }

        // getting the replace character
        printf("Replace: ");
        scanf(" %c", &c);

        // getting the replacing character
        printf("Replace with: ");
        scanf(" %c", &e);
        getchar();

        // printing before replacement
        printf("Before: %s", str);

        // calling the function
        replaceAll(str, c, e);

        // printing after the replacement
        printf("After: %s", str);
    }

    return 0;
}
