#include<stdio.h>
#include"fun_def.h"


void print_list(node** root){

    node* temp = *(root);

    printf ("The elements are: \n");
    while (temp->next != NULL){
        printf ("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}






