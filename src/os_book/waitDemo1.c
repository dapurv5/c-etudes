#include<stdio.h>
#include<unistd.h>

void waitDemo1(){

    int pid,status;
    if(fork()){
        printf("I am the father and I am waiting \n");
        pid=wait(&status);
        printf("I'm the Father \n - my son's PID is %d \n - my son's exit status is %d \n", pid, status);
    }
    else{
        printf("I am the son and sleeping \n");
        sleep(1);
        printf("I am the son and exiting \n");
        exit(0);
    }

    printf("Goodbye cruel world \n");

}
