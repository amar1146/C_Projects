#include<stdio.h>


int main(){

    int value;
    while(1){
    printf ("enter the number: ");
    if(scanf("%d",&value)==0){
        perror("scanf");
        break;
    }
    perror("scanf");
    }
    printf ("%d\n",value);
}



