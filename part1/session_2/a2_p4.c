/*
    JTSK-320111
    a2 p4.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    char line1[100];

    float a, b, h;
    fgets(line1, sizeof(line1), stdin);
    sscanf(line1, "%f", &a);

    fgets(line1, sizeof(line1), stdin);
    sscanf(line1, "%f", &b);

    fgets(line1, sizeof(line1), stdin);
    sscanf(line1, "%f", &h);

    float square, rectangle, triangle, trapezoid;
    square = a * a;
    rectangle = a * b;
    triangle = (a * h) / 2;
    trapezoid = (a + b) * h / 2;

    printf("square area=%f\n", square);
    printf("rectangle area=%f\n", rectangle);
    printf("triangle area=%f\n", triangle);
    printf("trapezoid area=%f\n", trapezoid);

    return 0;
}
