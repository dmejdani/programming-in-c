/*
    JTSK-320112
    a5_p1.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// popping function
void pop(struct stack *s)
{
    // empty stack
    if (s->count == 0)
    {
        printf("Popping Stack Underflow\n");
        return;
    }

    s->count--;

    int temp = s->array[s->count];
    printf("Popping %d\n", temp);
}

// pushing in stack
void push(struct stack *s, int item)
{
    // full stack
    if (s->count >= 12)
    {
        printf("Pushing Stack Overflow\n");
        return;
    }

    s->array[s->count] = item;
    s->count++;
    printf("Pushing %d\n", item);
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

    printf("Emptying Stack ");

    while (!isEmpty(s))
    {
        s->count--;
        printf("%d ", s->array[s->count]);
    }
    printf("\n");
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
