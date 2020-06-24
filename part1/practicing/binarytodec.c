#include <stdio.h>
#include <math.h>

int binaryToDecimal(int b[])
{
    int i;
    int decimal = 0;
    for (i = 0; b[i] == 1 || b[i] == 0; i++)
        decimal += b[i] * pow(2, (double)i);
    return decimal;
}

int main()
{
    int b[5] = {1,1,0,0,2};
    int result;
    result = binaryToDecimal(b);
    printf("%d\n", result);
    return 0;
}
