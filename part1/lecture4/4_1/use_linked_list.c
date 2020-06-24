/*
    JTSK-320112
    a3_p1.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include "linked_list.h"

int main()
{
    // initialiazing the
    struct list *my_list = NULL;
    char c;
    int value;

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
        }

    }
    return 0;
}
