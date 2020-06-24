/*
    JTSK-320111
    a2 p3.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char line1 [100];

    int w, d, h;
    printf("Enter the number of weeks: ");
    fgets(line1, sizeof(line1), stdin);
    sscanf(line1, "%d", &w);

    printf("Enter the number of days: ");
    fgets(line1, sizeof(line1), stdin);
    sscanf(line1, "%d", &d);

    printf("Enter the number of hours: ");
    fgets(line1, sizeof(line1), stdin);
    sscanf(line1, "%d", &h);

    int total = (w * 7 * 24) + (d * 24) + h;
    printf("Total number of hours=%d\n", total);

    return 0;
}
