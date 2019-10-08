#include<stdio.h>
#include<pthread.h>

void func1(void* ptr);
void func2(void* ptr);

char buf[24];

int main(){

    pthread_t t1, t2;

    char *msg1 = "In thread1";
    char *msg2 = "In thread2";

    pthread_create(&t1, NULL,(void* ) func1, (void*)msg1);
    pthread_create(&t2, NULL, (void* )func1, (void*)msg2);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

    return 0;
}

void func1(void* ptr){
    char* msg = (char* )ptr;
    printf ("%s\n",msg);

    sprintf(buf, "%s","Hello there!");

    pthread_exit(0);
}


void func2(void* ptr){
    char* msg = (char* )ptr;
    printf ("%s\n",msg);
    
    printf ("%s\n",buf);


    pthread_exit(0);
}
