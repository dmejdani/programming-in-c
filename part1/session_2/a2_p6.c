/*
    JTSK-320111
    a2 p6.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    char list1[100];
    double x, y;
    fgets(list1, sizeof(list1), stdin);
    sscanf(list1, "%lf", &x);

    fgets(list1, sizeof(list1), stdin);
    sscanf(list1, "%lf", &y);

    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    printf("ptr_one=%p\n", ptr_one);
    printf("ptr_two=%p\n", ptr_two);
    printf("ptr_three=%p\n", ptr_three);

    return 0;
}
