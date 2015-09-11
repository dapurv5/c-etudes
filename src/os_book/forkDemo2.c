#include<stdio.h>
#include<unistd.h>

/* Basically a fork() call creates an exact copy of that process somewhere elese in memory and runs copy
 * from the point the call was made.
*/
void forkDemo2(){

    printf("Hello World \n");
    int pid=fork();
    printf("Goodbye cruel world %d \n",pid);

}
