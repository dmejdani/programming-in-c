/*
    JTSK-320111
    a4_p1.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int position(char str[], char c)
{
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
    {
    /* do nothing*/
    }
    /*I addded the braces for the for loop so that the return is not run every first iteration*/
    return idx;
}

int main()
{
    char line[80];
    while (1)
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurence of 'g' is: %d\n", position(line, 'g'));
    }
    return 0;
}
