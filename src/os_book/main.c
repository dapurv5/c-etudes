/* 
 * File:   main.c
 * Author: apurv
 *
 * Created on 6 August, 2010, 8:45 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main2(int argc, char** argv) {

    //forkDemo1();
    //forkDemo2();
    //forkDemo3();
    //waitDemo1();
    //execDemo();
    //sharedMemoryDemo();
    //system("clear");
    //howManyProcesses(); //didn't give thought to it yet.

    int n=5;
    int *p1=&n;
    void **p21=&p1;
    //int **p21=p1;

    int i=*(int*)(*p21);
    printf("%d",i);
    
    return (EXIT_SUCCESS);
}

