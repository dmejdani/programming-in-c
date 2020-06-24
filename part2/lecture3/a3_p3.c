/*
    JTSK-320112
    a3_p3.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// defining the structure
struct list
{
    char info;
    struct list *next;
    struct list *prev;
};

// entering the element at the front
struct list* push_front(struct list *my_list, char value)
{
    struct list *newel;
    newel = (struct list *)malloc(sizeof(struct list));
    if (newel == NULL)
    {
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = my_list;
    if (my_list)
    {
        my_list->prev = newel;
    }
    newel->prev = NULL;
    return newel;
}

// printing the list values
void print_list_forw(struct list* my_list)
{
    while (my_list)
    {
        printf("%c ", my_list->info);
        my_list = my_list->next;
    }
    printf("\n");
}


// printing the list values
void print_list_back(struct list* my_list)
{
    struct list *cursor = my_list;

    while (cursor->next)
    {
        cursor = cursor->next;
    }

    while (cursor != NULL)
    {
        printf("%c ", cursor->info);
        cursor = cursor->prev;
    }

    printf("\n");
}

// removing all character c from the list
struct list* remove_all(struct list* my_list, char c)
{
    struct list *prev_elem, *next_elem, *cursor = my_list;
    int not_found = 1;

    // if empty list
    if (cursor == NULL)
    {
        return my_list;
    }

    // looping over all elements until the last one
    while (cursor->next)
    {
        if (cursor->info == c)
        {
            not_found = 0;
            next_elem = cursor->next;
            prev_elem = cursor->prev;
            if (prev_elem != NULL)
                prev_elem->next = next_elem;
            next_elem->prev = prev_elem;
            free(cursor);
            cursor = next_elem;
            if (cursor->prev == NULL)
            {
                my_list = cursor;
            }
        }

        else
        {
            next_elem = cursor->next;
            cursor = next_elem;
        }
    }

    // last element and the only one
    if (cursor->info == c && cursor->next == NULL && cursor->prev == NULL)
    {
        not_found = 0;
        free(cursor);
        my_list = NULL;
        //return my_list;
    }

    // last element but not the only one
    else if (cursor->info == c && cursor->next == NULL)
    {
        not_found = 0;
        prev_elem = cursor->prev;
        prev_elem->next = NULL;
        free(cursor);
        //return my_list;
    }

    // if element not found
    if (not_found)
    {
        printf("The element is not in the list!\n");
    }

    return my_list;
}

// disposing the list
void dispose_list(struct list* my_list)
{
    struct list *nextelem;
    while (my_list != NULL)
    {
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem;
    }
}

int main()
{
    // initializing
    struct list *my_list = NULL;
    int d;
    char c;

    // stoping at input = 5
    while(d != 5)
    {
        scanf("%d", &d);

        // switch cases
        switch(d)
        {
            case 1:
                scanf(" %c",&c);
                my_list = push_front(my_list, c);
                break;
            case 2:
                scanf(" %c", &c);
                my_list = remove_all(my_list, c);
                break;
            case 3:
                print_list_forw(my_list);
                break;
            case 4:
                print_list_back(my_list);
                break;
            case 5:
                dispose_list(my_list);
                break;
        }
    }
    return 0;
}
