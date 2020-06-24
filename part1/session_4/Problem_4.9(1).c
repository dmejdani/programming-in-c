/*
    JTSK-320111
    a4_p9.c
    Hayoung Kim
    ha.kim@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main(){
    char two[100];
    printf("Type in any string: ");
    fgets(two, sizeof(two), stdin);
    two[strlen(two)-1]='\0';
    char c, *loc;
    printf("type in a character: ");
    scanf("%c", &c);
    loc = strchr(two,c);
    while (loc != NULL){
        printf("%c found at location %ld\n ",c , loc-two+1);
        loc = strchr(loc+1, c);
    }
    return 0;
}
