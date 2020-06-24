#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp_r, *fp_e, *fp_c;
    char ch;
    int num;
    char out;

    fp_r = fopen("readable.txt", "r");
    fp_c = fopen("codes.txt", "r");
    fp_e = fopen("encoded.txt", "wb");

    if (!fp_r || !fp_c || !fp_e)
    {
        printf("Cannot open file/s!\n");
        exit(1);
    }
        
    while ((ch = fgetc(fp_r)) != EOF)
    {
        if (fscanf(fp_c, "%d", &num) == 1)
        {
            out = (ch * num) % 256;
            fwrite(&out, sizeof(char), 1, fp_e);
        }

        else
        {
            fseek(fp_c, 0L, SEEK_SET);
            fseek(fp_r, -1L, SEEK_CUR);
        }
    }

    fclose(fp_r);
    fclose(fp_c);
    fclose(fp_e);

    return 0;
}