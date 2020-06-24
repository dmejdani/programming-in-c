/*
    JTSK-320111
    a6_p9.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char fname1[100], fname2[100];

    // getting the first name
    printf("Enter the first file name: ");
    fgets(fname1, sizeof(fname1), stdin);

    // changing the '\n' to '\0'
    if (fname1[strlen(fname1) - 1] == '\n')
    {
        fname1[strlen(fname1) - 1] = '\0';
    }

    // getting the second name
    printf("Enter the second file name: ");
    fgets(fname2, sizeof(fname2), stdin);

    // changing the '\n' to '\0'
    if (fname2[strlen(fname2) - 1] == '\n')
    {
        fname2[strlen(fname2) - 1] = '\0';
    }

    FILE *fp1, *fp2;
    double no1, no2;

    // opening the first file in read mode
    fp1 = fopen(fname1, "r");
    // checking if it was done correctly
    if (fp1 == NULL)
    {
        printf("File 1 could not be open!\n");
        exit(1);
    }

    // getting the double from the first file
    fscanf(fp1, "%lf", &no1);

    // opening the second file in read mode
    fp2 = fopen(fname2, "r");
    // checking if it was done correctly
    if (fp2 == NULL)
    {
        printf("File 2 could not be open!\n");
        exit(1);
    }

    // getting the double from the second file
    fscanf(fp2, "%lf", &no2);

    FILE *fp3;

    // opening/creating the third file in write mode
    fp3 = fopen("results.txt", "w");
    // checking if it was done correctly
    if (fp3 == NULL)
    {
        printf("File could not be open!\n");
    }

    // writing data to the third file after computing the results
    fprintf(fp3, "%lf\n", no1 + no2);
    fprintf(fp3, "%lf\n", no1 - no2);
    fprintf(fp3, "%lf\n", no1 * no2);
    fprintf(fp3, "%lf\n", no1 / no2);

    // closing all the files
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}
