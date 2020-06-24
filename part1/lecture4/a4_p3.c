/*
    JTSK-320112
    a4_p3.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// compare function of qsort for ascending order
int order_asc(const void *a, const void *b)
{
    int c = *(int*)a;
    int d = *(int*)b;
    if (c < d)
        return -1;
    if (c > d)
        return 1;
    return 0;
}

// compare function of qsort for descending order
int order_desc(const void *a, const void *b)
{
    int c = *(int*)a;
    int d = *(int*)b;
    if (c > d)
        return -1;
    if (c < d)
        return 1;
    return 0;
}

// function pointer
typedef int (*func_ptr)(const void *a, const void *b);
func_ptr ptr[2] = {order_asc, order_desc};

int main()
{
    int n, i;
    char c;
    // getting the length of the list and storing the data
    scanf("%d", &n);
    int list[n];
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &list[i]);
    }

    // until 'e' is entered
    while (c != 'e')
    {
        scanf("%c", &c);
        switch(c)
        {
            case 'a':
                // qsort with a function pointer
                qsort(list, n, sizeof(int), ptr[0]);
                for (i = 0; i < n; i++)
                {
                    printf("%d ", list[i]);
                }
                printf("\n");
                break;
            case 'd':
                // qsort with a function pointer
                qsort(list, n, sizeof(int), ptr[1]);
                for (i = 0; i < n; i++)
                {
                    printf("%d ", list[i]);
                }
                printf("\n");
                break;
        }
    }
    return 0;
}
