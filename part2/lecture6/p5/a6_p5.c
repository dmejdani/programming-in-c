/*
    JTSK-320112
    a6_p5.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i;
    scanf("%i", &n);

    char tmp[n][100];

    // storing the names of the files
    for (i=0; i<n; i++)
    {
        scanf("\n%[^\n]s ", tmp[i]);
    }

    // output file and screen
    FILE *outf, *outp = stdout;
    outf = fopen("output.txt", "w");
    if (outf == NULL)
    {
        printf("Cannot open file!\n");
        exit(1);
    }

    printf("Concating the content of %i files ...\n", n);
    printf("The result is:\n");


    FILE *fp;
    char buffer[64];
    for (i=0; i<n; i++)
    {
        fp = fopen(tmp[i], "r");

        if (fp == NULL)
        {
            printf("Cannot open file!\n");
            exit(1);
        }

        int m;
        while ((m = fread(buffer,sizeof(char), 1, fp)))
        {
            fwrite(buffer, sizeof(char),  m, outp);
            int k = fwrite(buffer, sizeof(char), m, outf);
            if (!k)
                return 1;

    }
    // adding new line
    fputc('\n',outf);
    fputc('\n', outp);
    }
    printf("The result was written into output.txt\n");

    fclose(fp);
    fclose(outf);
    fclose(outp);

    return 0;
}
