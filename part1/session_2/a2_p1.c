/*
    JTSK-320111
    a2 p1.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/


#include <stdio.h>

int main()
{
    //Doubles
    char line1[100];
    double a, b;
    fgets(line1, sizeof(line1), stdin);
    sscanf(line1, "%lf", &a);
    fgets(line1, sizeof(line1), stdin);
    sscanf(line1, "%lf", &b);

    double sum = a + b;
    printf("sum of doubles=%lf\n", sum);

    double difference = a - b;
    printf("difference of doubles=%lf\n", difference);

    double square = a * a;
    printf("square=%lf\n", square);

    //Integers
    char line2[100];
    int int1, int2;
    fgets(line2, sizeof(line2), stdin);
    sscanf(line2, "%d", &int1);
    fgets(line2, sizeof(line2), stdin);
    sscanf(line2, "%d", &int2);

    int intsum = int1 + int2;/*
    JTSK-320111
    a2 p1.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/
    printf("sum of integers=%d\n", intsum);

    int intproduct = int1 * int2;
    printf("product of integers=%d\n", intproduct);

    //charachters
    char line3[100];
    char c1, c2;
    fgets(line3, sizeof(line3), stdin);
    sscanf(line3, "%c", &c1);
    fgets(line3, sizeof(line3), stdin);
    sscanf(line3, "%c", &c2);

    int sumchars = c1 + c2;
    printf("sum of chars=%d\n", sumchars);

    int charproduct = c1 * c2;
    printf("product of chars=%d\n", charproduct);

    char sumchars_text = c1 + c2;
    printf("sum of chars=%c\n", sumchars_text);

    char charsproduct_text= c1 * c2;
    printf("product of chars=%c\n", charsproduct_text);

    return 0;
}
