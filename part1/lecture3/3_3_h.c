/*
JTSK-320112
a3 p3.c
Hayoung Kim
ha.kim@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>


struct list {
    char info ;
    struct list * prev ;
    struct list * next ;
};

struct list* head;


struct list *insert(struct list **my_list, char value){
    struct list *newel;
    newel = (struct list *) malloc(sizeof(struct list));
   if (newel == NULL) {
        printf("Error allocating memory\n");
        exit(1);
    }
    newel -> info = value;

    newel -> next = (*my_list);
    newel -> prev = NULL;

    if(*my_list !=NULL)
        (*my_list) ->prev =  newel;
    *my_list = newel;
    return newel;
}


struct list *remove_elements(struct list *my_list, char value){
    int cnt =0;
    if (my_list == NULL){
        return NULL;
    }
    struct list *newel, *temp;
    newel = my_list;
    while (newel !=NULL){
        if(newel -> info ==value){

            temp = newel->next;
            if(my_list ==NULL || newel == NULL)
                return NULL;

            if(my_list == newel)
                my_list = newel -> next;
            if (newel -> next != NULL)
                newel -> next -> prev = newel->prev;
            if (newel->prev != NULL)
                newel -> prev -> next = temp;

            newel = temp;
            cnt += 1;
        }
        else
            newel = newel -> next;
    }
    if (cnt == 0){
        printf("The element is not in the list!\n");
    }
    return my_list;;
}





void print(struct list* my_list){
    struct list *tmp;
    while (my_list != NULL) {
        tmp = my_list;
        printf("%c ", tmp->info);
        my_list = my_list->next;
    }
}


void print_reverse(struct list* my_list){
    struct list *a = my_list;
    while (a -> next != NULL){
        a =  a -> next;
    }
    while (a != NULL) {

        printf("%c ", a->info);
        a = a-> prev;
    }
}


void dispose_list(struct list* my_list){
    struct list *nextelem;
    while (my_list != NULL){
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem;
    }
}

int main(){


    int n;
    char c;
    struct list *l = NULL;
    while (1){
        scanf("%i", &n);
        switch (n){
            case 1:
                scanf(" %c", &c);
                l = insert(&l, c);
                break;
            case 2:
                scanf(" %c", &c);
                remove_elements(l, c);
                break;
            case 3:
                print(l);
                printf("\n");
                break;
            case 4:
                print_reverse(l);
                printf("\n");
                break;
            case 5:
                exit(1);
                break;
            default:
                break;


        }
    }
    free(l);
    return 0;
}
