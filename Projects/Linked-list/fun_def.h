#include<stdio.h>

typedef struct NODE{
    struct NODE* next;
    int data;
}node;


void initialize_list(node** root);

void print_list(node** root);

void delete_element(node** root);

void add_element(node** root, int data);
