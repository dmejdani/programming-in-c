/*
    JTSK-320111
    a6_p7.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

// recursive function definition
int isprime(int x, int d)
{
    // if <= 1 then it is not prime
    if (x <= 1)
    {
        return 0;
    }

    // special case for integer 2
    if (x == 2)
    {
        return 1;
    }

    // checking if the number is divisible by the divisor d, where d starts from 2
    if (x % d == 0)
    {
        return 0;
    }

    // breaks the recursion and returns 1 when the square of the divisor is larger than our number
    if (d * d > x)
    {
        return 1;
    }

    // calling itself with divisor d + 1
    return isprime(x, d + 1);

}

int main()
{
    int n;

    // getting the number from the user
    scanf("%d", &n);

    // if true than print that the number is prime, else print that the number is not prime
    if (isprime(n, 2))
    {
        printf("%d is prime\n", n);
    }

    else
    {
        printf("%d is not prime\n", n);
    }

    return 0;
}
