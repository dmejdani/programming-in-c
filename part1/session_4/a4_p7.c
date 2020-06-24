/*
    JTSK-320111
    a4_p7.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

//defining the functions
float product(float a, float b)
{
    return a * b;
}

void productbyref(float a, float b, float *p)
{
    *p = a * b;
}

void modifybyref(float *a, float *b)
{
    *a += 3;
    *b += 11;
}

int main()
{
    //Getting input from the user
    float a, b, p;
    scanf("%f", &a);
    scanf("%f",&b);

    //returns the product by value
    printf("product=%f\n", product(a, b));

    //returns the product by reference
    productbyref(a, b, &p);
    printf("product=%f\n", p);

    //Changes on a and b by reference
    modifybyref(&a, &b);
    printf("a=%f b=%f\n", a, b);

    return 0;
}
