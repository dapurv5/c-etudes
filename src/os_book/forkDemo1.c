#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>

int forkDemo(){
    pid_t pid;

    /*fork a child process*/
    pid=fork();
    if(pid<0){
        fprintf(stderr,"Fork Failed");
        return 1;
    }
    else if(pid == 0){
        printf("\n");
        execlp("/bin/date","ls",NULL);
    }
    else{
        pid_t p=wait(NULL);
        printf("\n Child Complete");
    }
    return 0;
}
