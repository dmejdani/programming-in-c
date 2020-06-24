/*
    JTSK-320112
    a1_p3.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

// defining macros that call other macros
#define MAX1(A, B, C) ((A > B) ? MAX2(A, C) : MAX2(B, C))
#define MAX2(D, E) ((D > E) ? D : E)
#define MIN1(E, F, G) ((E < F) ? MIN2(E, G) : MIN2(F, G))
#define MIN2(H, I) ((H < I) ? H : I)
// midrange macro which 'returnś' the correct type
#define MIDRNG(J, K, TYPE) ((TYPE)(J + K) / 2)

int main()
{
    // getting the input
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // defining a variable to shorten the length of the next line
    double midrng = MIDRNG(MAX1(a, b, c), MIN1(a, b, c), double);
    // printing the midrange
    printf("The mid-range is: %lf\n", midrng);
    return 0;
}
