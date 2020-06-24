/*
    JTSK-320112
    a1_p1.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
// defining the macro
#define SWAP(A, B, TYPE) {TYPE temp = A; A = B; B = temp;}

int main() {
    int a, b;
    double c, d;

    // getting the values from the input
    scanf("%d %d %lf %lf", &a, &b, &c, &d);

    // swapping the values
    SWAP (a, b, int)
    SWAP (c, d, double)

    // printing after swapping
    printf("After swapping:\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%lf\n", c);
    printf("%lf\n", d);

    return 0;
}
