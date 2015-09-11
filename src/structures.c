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
struct node{
    int value;
    struct node  *next;
};

void structures () {

    struct node n1,n2,n3;
    struct node *base=&n1;

    n1.value=1;
    n1.next=&n2;

    n2.value=2;
    n2.next=&n2;

    n3.value=3;
    n3.next=NULL;
    n3.next=(struct node *)0;

    int a=1320;
    int *ptr1=&a;
    int *ptr2=ptr1;

    int b=*(int*)ptr1;
    printf("%d",b);

 }



