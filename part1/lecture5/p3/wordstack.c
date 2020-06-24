/*
    JTSK-320112
    a5_p3.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "stack.h"

int main()
{
    struct stack s;
    // setting the count to 0
    s.count = 0;
    char word[31] = " ";
    char end;
    // variables to implement the correct function of "exit" command
    // exit the program only when "exit" is prepended and appended by '\n'
    int first = 1, last;

    while (1)
    {
        // getting the word and putting into stack
        scanf("%s", word);
        push(&s, word);
        end = getchar();

        if (end == '\n')
        {
            last = 1;
        }
        else{
            last = 0;
        }

        // checking if exit
        if (first && last && (strcmp(word, "exit") == 0))
        {
            exit(0);
        }

        first = last;

        // the compare block
        if (last)
        {
            int i, pal = 1;

            // comparing words, letting out the middle word if count is odd
            for (i = 0; i < floor(s.count / 2); i++)
            {
                if (strcmp(s.array[i], s.array[s.count - (i + 1)]) != 0)
                {
                    pal = 0;
                    printf("The sentence is not palindromic by words!\n");
                    break;
                }
            }

            if (pal)
            {
                printf("The sentence is palindromic by words!\n");
            }

            // emptying the stack after each compare block
            empty(&s);
        }
    }

    return 0;
}
