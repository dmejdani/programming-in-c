/*
    JTSK-320112
    a6_p4.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

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

    // name of file
    scanf("%s", fname);
    getchar();

    // opening the file
    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Could not open file!\n");
    }

    // username from stdin
    scanf("%s", uname);
    getchar();

    // getting the size of the file
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    while(1)
    {
        // if exit command
        if (strcmp(uname, "exit") == 0)
        {
            printf("Exiting ...\n");
            break;
        }

        // password from stdin
        scanf("%s", pwd);
        getchar();

        // until the end of the file
        while (ftell(fp) != size)
        {
            // checking the match of the username
            fscanf(fp, "%s", uname_check);
            if (strcmp(uname, uname_check) == 0)
            {

                // checking if the passwords match
                fseek(fp, 1, SEEK_CUR);
                char pwd_check[50];
                fscanf(fp, "%s", pwd_check);
                if (strcmp(pwd, pwd_check) == 0)
                {
                    printf("Access to user %s is granted.\n", uname);
                }
                else
                {
                    printf("Access to user %s is denied.\n", uname);
                }

                // cursor to the top again
                fseek(fp, 0, SEEK_SET);
                break;
            }
        }

        // getting the next username
        scanf("%s", uname);
        getchar();
    }
    // closing file
    fclose(fp);
    return 0;
}
