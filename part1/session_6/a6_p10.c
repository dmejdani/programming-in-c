/*
    JTSK-320111
    a6_p10.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaring all files
    FILE *fp1, *fp2, *fp3;

    // opening them and checking if it was done correctly
    fp1 = fopen("text1.txt", "r");
    if (fp1 == NULL)
    {
        printf("File could not be open!\n");
        exit(1);
    }

    fp2 = fopen("text2.txt", "r");
    if (fp2 == NULL)
    {
        printf("File could not be open!\n");
        exit(1);
    }

    fp3 = fopen("merge12.txt", "w");
    if (fp3 == NULL)
    {
        printf("File could not be open!\n");
        exit(1);
    }

    char c;

    // getting content from the first file and copying it to the third one
    while ((c = fgetc(fp1)) != EOF)
    {
        fputc(c, fp3);
    }

    // getting content from the second file and copying it to the third one
    while ((c = fgetc(fp2)) != EOF)
    {
        fputc(c, fp3);
    }

    // closing all the files
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}
