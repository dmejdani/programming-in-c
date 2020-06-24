/*
    JTSK-320111
    a4_p5.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>

//Defining the sum function
float sum(float list[], int elements)
{
    float sum = 0;
    int i;
    for (i = 0; i < elements; ++i)
    {
        sum += list[i];
    }

    return sum;
}

//Defining the average function
float average(float list[], int elements)
{
    float sum = 0;
    int i;
    for (i = 0; i < elements; ++i)
    {
        sum += list[i];
    }

    return sum / elements;
}

int main ()
{
    float list1[10], x;
    int idx = 0;

    //Getting the values from the user
    while (1)
    {
        scanf("%f", &x);
        if (x == -99.0)
        {
            //stopping from asking input
            break;
        }
        list1[idx] = x;
        idx++;
    }

    //Calling the functoins and printing the results
    printf("Sum=%f\n", sum(list1, idx + 1));
    printf("Average=%f\n", average(list1, idx));

    return 0;
}
