/*
    JTSK-320112
    a2_p2.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[100], str2[100];

    // getting the strings from the input until the '\n'
    scanf ("%[^\n]%*c", str1);
    scanf ("%[^\n]%*c", str2);
    // concatinating into str1
    strcat(str1, str2);

    int length, i;
    char *str;
    // getting the length of the concatinated string
    length = strlen(str1);
    // dynamically allocating and checking
    str = (char *)malloc(sizeof(char) * (length + 1));
    if (str == NULL)
    {
        printf("Memory allocation error!\n");
        exit(1);
    }

    // storing the values to the dynamically alocated array
    for (i = 0; i < length; i++)
    {
        str[i] = str1[i];
    }

    // ending the string and printing
    str[length] = '\0';
    printf("Result of concatenation: %s\n", str);

    return 0;
}
