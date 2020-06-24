/*
    JTSK-320111
    a4_p9.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char one[100], two[200];

    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);

    //replacing the \n with \0
    one[strlen(one) - 1] = '\0';
    two[strlen(two) - 1] = '\0';

    //printing the lengths of strigs using strlen
    printf("length1=%u\n", (unsigned)strlen(one));
    printf("length2=%u\n", (unsigned)strlen(two));

    //making a copy of one so that we can recover after concatenation
    char one1[100];
    strcpy(one1, one);

    // concatenating using strcat
    printf("concatenation=%s\n", strcat(one, two));

    //recovering one
    strcpy(one, one1);

    //copying using strcpy
    char three[100];
    strcpy(three, two);
    printf("copy=%s\n", three);

    // comparing strings using strcmp with the three cases
    if (strcmp(one, two) == 0)
    {
        printf("one is equal to two\n");
    }

    else if (strcmp(one, two) < 0)
    {
        printf("one is smaller than two\n");
    }

    else
    {
        printf("one is larger than two\n");
    }

    //checing if c is contained in two
    char c;
    scanf("%c", &c);

    char *position;
    position = strchr(two, c);
    if (position != NULL)
    {
        printf("position=%d\n", (int)(position - two));

        //after finding the first occurence, we search for the character in the string after the first match position. This can be done by moving the pointer from which we start looking for
        position = strchr(position + 1, c);
        while (position != NULL)

        {
            printf("position=%d\n", (int)(position - two));
            position = strchr(position + 1, c);
        }
    }
    //if there is no match for the full string than the message below is printed
    else
    {
        printf("The character is not in the string\n");
    }

// Method without strchnr()
/*
    int notfound = 1;
    char c;
    scanf("%c", &c);

    int idx = 0;
    while (idx < strlen(two))
    {
        if(two[idx] != c)
        {
            if ((idx == strlen(two) - 1) && notfound)
            {
                //two conditions because we should have reached the end of the string without finding any match
                printf("%c is not contained in two\n", c);
            }
        }
        else
        {
            printf("position=%d\n", idx);
            notfound = 0;
        }
        idx++;
    }
*/
    return 0;
}
