#include<stdio.h>
#include<unistd.h>

int howManyProcesses(){

    pid_t pid1,pid2,pid3;

    /*fork a child process*/
    pid1=fork();

    /*fork a child process*/
    pid2=fork();

    /*fork a child process*/
    pid3=fork();

    pid_t pid=getpid();
    printf("\n From process %d",pid);

    return 0;

}
