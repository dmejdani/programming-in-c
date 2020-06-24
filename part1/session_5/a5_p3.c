/*
    JTSK-320111
    a5_p3.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

//geometric mean function definition
float geometric_mean(float arr[], int num)
{
    int i;
    float product = 1;

    //looping over the elements of the list
    for (i = 0; i < num; i++)
    {
        product *= arr[i];
    }

    return pow(product, (double)1 / num);
}

//maximum function definition
float maximum(float arr[], int num)
{
    int i;
    float max = arr[0];
    //looping over the elements of the list
    for (i = 1; i < num; i++)
    {
        //comparing the elements with the maximum
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

//minimum function definition
float minimum(float arr[], int num)
{
    int i;
    float min = arr[0];
    //looping over the elements of the list
    for (i = 1; i < num; i++)
    {
        //comparing the elements of the list with the minimum
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

//sumall definition
float sumall(float arr[], int num)
{
    float sum = 0;
    int i = 0;

    // looping over the elements of the list and adding it to the sum
    while (i < num)
    {
        sum += arr[i];
        i++;
    }

    return sum;
}

int main() {
    float list[15];
    int i = 0, n;
    float elem;

    // getting the number of the elements
    printf("Enter the size of the list:");
    scanf("%d", &n);

    // getting the elements and storing them to list[i]
    printf("Enter the elements of the list:\n");
    getchar();
    while (i < n)
    {
        scanf("%f", &elem);
        list[i] = elem;
        i++;
    }

    // choosing which operation to perform
    printf("Enter the function character:\n");
    getchar();
    char c;
    scanf("%c", &c);
    switch (c)
    {
        // geometric mean case
        case 'm':
        {
            printf("GeometricMean=%f\n", geometric_mean(list, n));
            break;
        }

        // printing the maximum
        case 'h':
        {
            printf("Highest=%f\n", maximum(list, n));
            break;
        }

        // printing the minimum
        case 'l':
        {
            printf("Lowest=%f\n", minimum(list, n));
            break;
        }

        // the sum of all elements
        case 's':
        {
            printf("Sum=%f\n", sumall(list, n));
            break;
        }

        default:
        {
            printf("No valid operation was choosen");
        }
    }

    return 0;
}


