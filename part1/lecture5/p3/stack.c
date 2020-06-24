/*
    JTSK-320112
    a5_p3.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

// popping function
void pop(struct stack *s, char item[31])
{
    // empty stack
    if (s->count == 0)
    {
        printf("Popping Stack Underflow\n");
        return;
    }

    s->count--;
    strcpy(item, s->array[s->count]);
}

// pushing in stack
void push(struct stack *s,char item[31])
{
    // full stack
    if (s->count >= 12)
    {
        printf("Pushing Stack Overflow\n");
        return;
    }

    strcpy(s->array[s->count], item);
    s->count++;
}

// emptying stack
void empty(struct stack *s)
{
    // emtpy stack
    if (isEmpty(s))
    {
        printf("Popping Stack Underflow\n");
        return;
    }

    while (!isEmpty(s))
    {
        s->count--;
    }
}

// isEmpty check function
int isEmpty(struct stack *s)
{
    if (s->count == 0)
    {
        return 1;
    }
    return 0;
}
