#include<stdio.h>
#include<unistd.h>

void forkDemo3(){

    printf("I am contained in the file %s \n",__FILE__);
    int pid;
    printf("Hello Worldn \n");

    pid=fork();

    if(pid!=0){
        printf("I am the father and my son's pid is %d \n",pid);
    }
    else{
        printf("I am the son \n");
    }

    printf("Goodbye cruel worldn \n");
}
