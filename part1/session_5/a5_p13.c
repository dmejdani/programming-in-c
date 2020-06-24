/*
    JTSK-320111
    a5_p13.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// function definition
void uppcase(char *str)
{
    int i = 0;

    // looping until '\n' and checking if the character is lowcase to change it to uppercase
    while (str[i] != '\n')
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }

        ++i;
    }
}

// function definition
void lowcase(char *str)
{
    int i = 0;

    // looping until '\n' and checking if the character is uppercase to change it to lowcase
    while (str[i] != '\n')
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }

        ++i;
    }
}

int main()
{
    char str[91], exit[10] = "exit\n";

    while(1)
   {
        // getting the string from the user
        fgets(str, sizeof(str), stdin);

        // checking if the string is "exit\n"
        if (strcmp(str, exit) == 0)
        {
            break;
        }

        // calling the function and printing the string
        uppcase(str);
        printf("uppcase=%s", str);

        // calling the function and printing the string
        lowcase(str);
        printf("lowcase=%s", str);
    }

    return 0;
}
