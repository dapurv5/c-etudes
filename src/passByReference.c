/* 
 * File:   main.c
 * Author: apurv
 * Name: passByReference.c
 *
 * Created on May 7, 2011, 6:44 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * The following demonstrates call by reference in C.
 */
void myFunPrimitive(int* n){
    int b=*n+1;
    *n=b;
}

void passByReference() {

    printf("hello");
    int a=2;    
    myFunPrimitive(&a);
    printf("the number has been modified %d ",a);

}

