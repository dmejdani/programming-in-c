/*
    JTSK-320112
    a5_p1.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    struct stack s;
    // setting the count to 0
    s.count = 0;
    char comm;
    int item;

    // until 'q'
    while (comm != 'q')
    {
        scanf("%c", &comm);
        switch(comm)
        {
            case 's':
                scanf("%d", &item);
                push(&s, item);
                break;
            case 'p':
                pop(&s);
                break;
            case 'e':
                empty(&s);
                break;
        }
    }

    printf("Quit\n");

    return 0;
}
