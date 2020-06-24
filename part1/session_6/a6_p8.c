/*
    JTSK-320111
    a6_p8.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaring the reading file
    char ch1, ch2;
    FILE *fp;
    // openning file in read mode
    fp = fopen("chars.txt", "r");

    // checking if it was open correctly
    if (fp == NULL)
    {
        printf("Cannot open file!\n");
        exit(1);
    }

    // reading from the file
    fscanf(fp, "%c%c", &ch1, &ch2);
    // closing the file
    fclose(fp);

    // declaring output file
    FILE *fpo;

    // file opened in write mode
    fpo = fopen("codesum.txt", "w");

    // writing in the file
    fprintf(fpo, "%d", ch1 + ch2);

    // closing connection to file
    fclose(fpo);

    return 0;
}

