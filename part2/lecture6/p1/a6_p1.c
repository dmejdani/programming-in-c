/*
    JTSK-320112
    a6_p1.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

//////// WRONG FILE /////// DOWNLOAD THE RIGHT ONE FROM GRADER !!!!!!!!!!!!!!

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fname[50];
    char uname[50];
    char pwd[50];
    char uname_check[50];
    int size;

    FILE *fp;

    scanf("%s", fname);
    getchar();

    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Could not open file!\n");
    }

    scanf("%s", uname);
    getchar();

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    while(1)
    {
        if (strcmp(uname, "exit") == 0)
        {
            printf("Exiting...\n");
            break;
        }

        scanf("%s", pwd);
        getchar();

        while (ftell(fp) != size)
        {
            fscanf(fp, "%s", uname_check);
            if (strcmp(uname, uname_check) == 0)
            {

                fseek(fp, 1, SEEK_CUR);
                char pwd_check[50];
                fscanf(fp, "%s", pwd_check);
                if (strcmp(pwd, pwd_check) == 0)
                {
                    printf("Acces to user %s is granted.\n", uname);
                }
                else
                {
                    printf("Acces to user %s is denied.\n", uname);
                }

                fseek(fp, 0, SEEK_SET);
                break;
            }
        }

        scanf("%s", uname);
        getchar();
    }
    fclose(fp);
    return 0;
}
