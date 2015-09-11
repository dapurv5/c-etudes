#include<stdio.h>
#include<unistd.h>

void execDemo(){
    execl("/bin/cat", "cat", "./execDemo.c", NULL);
}
