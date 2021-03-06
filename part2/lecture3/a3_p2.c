/*
    JTSK-320112
    a3_p2.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// defining the structure
struct list
{
    int info;
    struct list *next;
};

// printing the list values
void print_list(struct list* my_list)
{
    while (my_list)
    {
        printf("%d ", my_list->info);
        my_list = my_list->next;
    }
    printf("\n");
}

// entering the element at the front
struct list* push_front(struct list *my_list, int value)
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
    return newel;
}

// putting the element to the end of the list
struct list* push_back(struct list* my_list, int value)
{
    struct list *cursor, *newel;
    cursor = my_list;
    newel = (struct list*)malloc(sizeof(struct list));
    if (newel == NULL)
    {
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = NULL;
    if (my_list == NULL)
    {
        return newel;
    }
    while (cursor->next)
    {
        cursor = cursor->next;
    }
    cursor->next = newel;
    return my_list;
}


// removing the first element
struct list* remove_first(struct list *my_list)
{
    // checking if the list is empty
    if (my_list == NULL)
    {
        return my_list;
    }
    // returning the new pointer which is the next element of the list
    struct list *newpointer;
    newpointer =  my_list->next;
    free(my_list);
    my_list = newpointer;
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

// putting the element in the ith position
struct list* put_element(struct list *my_list, int value, int index)
{
    // invalid position
    if (index < 0)
    {
        printf("Invalid position!\n");
        return my_list;
    }

    int i;
    struct list *cursor, *newel;
    cursor = my_list;
    // malloc for the new element
    newel = (struct list*)malloc(sizeof(struct list));
    if (newel == NULL)
    {
        printf("Error allocating memory\n");
        return my_list;
    }

    // inserting at the 0 position
    if (index == 0)
    {
        newel->info = value;
        printf("%d\n", value);
        newel->next = my_list;
        return newel;
    }
    // other positions
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            cursor = cursor->next;
            // invalid position
            if (cursor == NULL)
            {
                printf("Invalid position!\n");
                return my_list;
            }
        }
        // inserting and changing the next struct pointers
        newel->next = cursor->next;
        newel->info = value;
        cursor->next = newel;

        return my_list;
    }
}

// reversing the list
struct list* reverse(struct list *my_list)
{
    // if empty list
    if (my_list == NULL)
    {
        return my_list;
    }
    // next and previous element
    struct list *cursor, *previous_elmnt = NULL, *next_elmnt = NULL;
    cursor = my_list;

    // changing the pointers
    while (cursor)
    {
        next_elmnt = cursor->next;
        cursor->next = previous_elmnt;
        previous_elmnt = cursor;
        cursor = next_elmnt;
    }
    return previous_elmnt;
}


int main()
{
    // initialiazing the
    struct list *my_list = NULL;
    char c;
    int value, index;

    // quiting the loop with 'q'
    while (c != 'q')
    {
        scanf("%c", &c);

        // switch cases
        switch(c)
        {
            case 'a':
                scanf("%d", &value);
                my_list = push_back(my_list, value);
                break;
            case 'b':
                scanf("%d", &value);
                my_list = push_front(my_list, value);
                break;
            case 'p':
                print_list(my_list);
                break;
            case 'r':
                my_list = remove_first(my_list);
                break;
            case 'q':
                dispose_list(my_list);
                break;
            case 'i':
                scanf("%d %d", &index, &value);
                my_list = put_element(my_list, value, index);
                break;
            case 'R':
                my_list = reverse(my_list);
                break;
        }

    }
    return 0;
}
