/*
    JTSK-320111
    a2 p5.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    char list1[100];

    int a;
    fgets(list1, sizeof(list1), stdin);
    sscanf(list1, "%d", &a);
    printf("a=%i\n", a);

    int *ptr_a;
    ptr_a = &a;
    printf("ptr_a=%p\n", ptr_a);

    *ptr_a += 5;
    printf("modified a=%d\naddress of a=%p\n", a, &a);

    return 0;
}
