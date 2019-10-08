#include<stdio.h>
#include"fun_def.h"


int main(){
    
    int i;
    int choice;
    int value;
    struct node* root;
    root = NULL;
    int count = 0;
   
    char strchoice[10];
    char strvalue[10];

    printf ("Welcome to linked list\n");
    while (1){
    printf ("Enter the coice\n1- for intilizing\n2- for adding the element\n3- deleting the element\n4- printing the element: ");

    fgets(strchoice,10,stdin);
    choice = atoi(strchoice);

   
            switch(choice){

                case 0:
                    printf ("invalid choice Please enter an integer value between 1 to 10 \n");
                    break;

                case 1:
                    printf("Initializing the linked list with 5 elements\n");
                    initialize_list(&root);
                    print_list(&root);
                    break;

                case 2:
                    printf ("Enter the element to be added: \n");
                    fgets(strvalue,10,stdin);
                    value = atoi(strvalue);
                    if (value!=0)
                    add_element(&root,value);
                    printf ("wrong value entered");
                    break;

                case 3:
                    printf("The index to be deleted:\n");
                    delete_element(&root);
                    print_list(&root);
                    break;

                case 4:
                    printf ("The elements currently in the list are: \n");
                    print_list(&root);
                    break;

                default:
                    printf ("Exiting....\n");
                  //print_list(&root);
                    //return 0;
                    break;
            }
       } 
    }

   


                        
