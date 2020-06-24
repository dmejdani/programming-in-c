/*
    JTSK-320111
    a5_p4.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

// function definition
int count_consonant(char str[])
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; ++i)
    {
        // if str[i] is vowel then continue
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            continue;
        }
        // left cases when str[i] is an english alphabet letter, increases count by 1
        else if ((str[i] >= 'a' && str[i] <= 'z') ||
                 (str[i] >= 'A' && str[i] <= 'Z'))
        {
            count += 1;
        }
    }

    return count;
}

int main()
{
    char list[101];

    // getting input until list[0] is '\0'
    while (1)
    {
        fgets(list, sizeof(list), stdin);

        if (list[0] == '\n')
        {
            break;
        }
        // calling the function and printing the result
        printf("Number of consonants=%d\n", count_consonant(list));
    }

    return 0;
 }
