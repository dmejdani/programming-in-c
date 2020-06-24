/*
    JTSK-320112
    a4_p2.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// defining the max length of the string
#define MAX_STRING_LENGTH 80

// function to print uppercase
void print_upper(char *str)
{
    while (*str != '\0')
    {
        printf("%c", toupper(*str));
        str++;
    }
    printf("\n");
}

// function to print lowercase
void print_lower(char *str)
{
    while (*str != '\0')
    {
        printf("%c", tolower(*str));
        str++;
    }
    printf("\n");
}

// lower to upper and upper to lower function
void switch_case(char *str)
{
    int i, tmp;
    for (i = 0; i < strlen(str); i++)
    {
        tmp = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
        printf("%c", tmp);
    }
    printf("\n");
}

// end the program function
void end_loop(char *str)
{
    exit(0);
}

// defining the function pointer
typedef void (*func_ptr)(char *str);
func_ptr ptr[4] = {print_upper, print_lower, switch_case, end_loop};

int main()
{
    char str[MAX_STRING_LENGTH];
    int a;
    // getting the string
    fgets(str, sizeof(str), stdin);
    // for printing purposes
    str[strlen(str) - 1] = '\0';
    while (1)
    {
        scanf("%d", &a);
        // using function pointer
        ptr[a - 1](str);
    }
    return 0;
}
