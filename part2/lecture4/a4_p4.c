/*
    JTSK-320112
    a4_p4.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// structure of the person
struct person
{
    char name[30];
    int age;
};

// bubble sort algorithm
void bubblesort(struct person *arr, int n)
{
    int i,j, temp;
    char tmp[30];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1; j++)
        {
            if (strcmp(arr[j].name, arr[j+1].name) > 0)
            {
                strcpy(tmp, arr[j].name);
                strcpy(arr[j].name, arr[j+1].name);
                strcpy(arr[j+1].name, tmp);
                temp = arr[j].age;
                arr[j].age = arr[j+1].age;
                arr[j+1].age = temp;
            }
        }
    }
    for (i = 0;i < n; i++)
    {
        printf("{%s, %i}; ", arr[i].name, arr[i].age);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1; j++)
        {
            if ((arr[j].age ) > (arr[j+1].age))
            {
                temp = arr[j].age;
                arr[j].age = arr[j+1].age;
                arr[j+1].age = temp;
                strcpy(tmp, arr[j].name);
                strcpy(arr[j].name, arr[j+1].name);
                strcpy(arr[j+1].name, tmp);
            }
        }
    }
    for (i = 0;i < n; i++)
    {
        printf("{%s, %i}; ", arr[i].name, arr[i].age);
    }
    printf("\n");
}

int main(){
    int n, i;
    // getting the number of data
    scanf("%d", &n);
    struct person *arr;
    arr = (struct person*)malloc(n * sizeof(struct person));
    // storing the name and age
    for (i = 0; i < n; i++)
    {
        scanf("%s%d", arr[i].name,&arr[i].age);
    }

    bubblesort(arr, n);
    return 0;
}
