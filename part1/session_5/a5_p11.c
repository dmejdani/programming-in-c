/*
    JTSK-320111
    a5_p11.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// function definition
int count_insensitive(char *str, char c)
{
    int count = 0, i = 0;

    // checking if the character is letter so that we can use tolower()
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        c = tolower(c);

        // checking until '\n'
        while (str[i] != '\n')
        {
            if (c == tolower(str[i]))
            {
                count += 1;
            }
            ++i;
        }
        return count;
    }

    // checking until '\n'
    while (str[i] != '\n')
    {
        if (c == str[i])
        {
            count += 1;
        }
        ++i;
    }
    return count;
}

int main()
{
    char *arr1, *arr2, c;

    // allocating arr1
    arr1 = (char*)malloc(sizeof(char) * 51);

    // checking if allocated successfully
    if (arr1 == NULL)
    {
        printf("Not allocated correctly\n");
        exit(1);
    }

    // getting the character we want to count
    printf("Enter a character: ");
    scanf("%c", &c);
    getchar();

    // getting the string
    printf("Enter a string: ");
    fgets(arr1, 51, stdin);

    // finding the length of the string including '\n'
    int i = 0;
    while (arr1[i] != '\0')
    {
        i += 1;
    }

    // allocating the second array
    arr2 = (char*) malloc(sizeof(char) * (i + 1));

    // checking if allocation was correct
    if (arr2 == NULL)
    {
        printf("Not allocated correctly\n");
        free(arr1);
        exit(1);
    }

    // copying all values including '\n'
    int j = 0;
    while (j <= i)
    {
        arr2[j] = arr1[j];
        ++j;
    }

    // freeing the memory of arr1
    free(arr1);

    // calling the function and printing the result
    printf("The character '%c' occurs %d times.\n", c, count_insensitive(arr2, c));

    // freeing the memory of arr2
    free(arr2);

    return 0;

}
