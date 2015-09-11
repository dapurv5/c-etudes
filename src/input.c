
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
 * The following demonstrates taking command line input in C.
 */

/*
 * Takes 3 numbers as inputs and prints the absolute value of difference between the numbers.
 */
void input() {

    long p,q,r;

    while( scanf("%ld %ld")!=EOF ){
        if(q>p)
            r=q-p;
        else
            r=p-q;
    }
    
    printf("%ld",r);
}

