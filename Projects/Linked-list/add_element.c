#include<stdio.h>
#include"fun_def.h"

void add_element(node** root, int value){

    node* temp = *(root);
    node* temp1;
    temp1 = (node*)(malloc(sizeof(node)));

    temp1->next = root;
    root = temp1;



}
