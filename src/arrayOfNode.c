#include <stdio.h>
#include <stdlib.h>

struct node{
    int a;
    struct node* n;
};

arrayOfNodeDemo(){
    struct node A[10];
    A[0].a = 10;
    
    printf("%d", A[0].a);
}
