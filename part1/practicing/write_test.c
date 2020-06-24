#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    int n, value, i;
    scanf("%d", &n);

    file = fopen("test.txt", "w");
    if (file == NULL)
        exit(1);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &value);
        fprintf(file, "%d %d\n", value, value * value);
    }

    return 0;
}
