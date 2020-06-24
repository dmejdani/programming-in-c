/*
    JTSK-320111
    a4.p1.c
    Hayoung Kim
    ha.kim@jacobs-university.de
*/
#include <stdio.h>

int position(char str[], char c)
{
    int idx;
    /* Loop until end of string*/
    for (idx=0; str[idx] !=c &&str[idx] !='\0'; ++idx){
    }
    return idx;
}

int main(){
    char line[80];
    while (1){
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
    return 0;
}
