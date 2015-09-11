/*
 * File:   main.c
 * Author: apurv
 *
 * Created on June 22, 2010, 7:49 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
void sum(int a,int b)
{
    int c=a+b;
    printf("The sum is %d",c);
}

void (*Fptr)(int,int);

void functionPointer () {
    Fptr=sum;
    Fptr(2,3);
    
}



