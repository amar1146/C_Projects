#include<stdio.h>
#include"fun_def.h"

void initialize_list(node** root){

    int i;
    node * temp;
    temp = *root;
    node* temp1;

    for (i=0; i < 5; i++){
        temp1 = (node*)malloc(sizeof(node));
        temp1->data = 2*i;
        temp1->next = temp;
        temp = temp1;
    }
    *root = temp;
}
