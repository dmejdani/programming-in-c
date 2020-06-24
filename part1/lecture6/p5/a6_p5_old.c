/*
    JTSK-320112
    a6_p4.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int cbd_merge_files(char** filenames, int n, char* final_filename)
{
  FILE* fp = fopen(final_filename, "wb");

  if (fp == NULL) return 1;

  char buffer[64];

  for (int i = 0; i < n; ++i) {

    char* fname = filenames[i];

    FILE* fp_read = fopen(fname, "rb");

    if (fp_read == NULL) return 1;

    int n;

    while ((n = fread(buffer, sizeof(char), 1, fp_read))) {

        int k = fwrite(buffer, sizeof(char), n, fp);

        if (!k) return 1;
    }
    fclose(fp_read);

 }

 fclose(fp);

 return 0;
}


int main()
{
    int n, i;
    scanf("%d", &n);
    char output[] = "output.txt";
    char name[20];
    char **f_names;


    f_names = (char **)malloc(sizeof(char *) * n);
    if (!f_names)
    {
        printf("Error allocating!\n");
        exit(1);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%s", name);
        f_names[i] = (char *)malloc(sizeof(char) * strlen(name) + 1);
        if (!f_names[i])
        {
            printf("Eror allocating!\n");
            exit(1);
        }
    }


    FILE *fp =  fopen("output.txt", 'wb');
    if (fp == NULL) return 1;

    char buffer[64];

    for (int i = 0; i < n; ++i)
    {

    char* fname = f_names[i];

    FILE* fp_read = fopen(fname, "rb");

    if (fp_read == NULL) return 1;

    int n;

    while ((n = fread(buffer, sizeof(char), 1, fp_read)))
    {

        int k = fwrite(buffer, sizeof(char), n, fp);

        if (!k) return 1;
    }
    fclose(fp_read);

 }

 fclose(fp);



    cbd_merge_files(f_names, n, output);

    for (i = 0; i < n; i++)
    {
        free(f_names[i]);
    }

    free(f_names);

    return 0;
}
