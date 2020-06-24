/*
    JTSK-320111
    a5_p10.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

// definition of the function
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
    // changing the value of the variables by reference using pointers
    *prod = a * b;
    *div = a / b;
    *pwr = (float) pow(a, b);
    *invb = 1 / b;
}

int main()
{
    float a, b, prod, div, pwr, invb;

    // getting the value of a and b
    printf("Enter the value of a:\n");
    scanf("%f", &a);
    printf("Enter value of b:\n");
    scanf("%f", &b);

    // calling the function
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);

    // printing the values
    printf("Product=%f\n", prod);
    printf("Division=%f\n", div);
    printf("Power=%f\n", pwr);
    printf("Inverse=%f\n", invb);

    return 0;
}
