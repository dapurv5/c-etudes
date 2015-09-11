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
void inputString () {
    char* pStr=NULL;
    pStr=(char*)malloc(50);
    //scanf("%s",pStr);
    //printf(pStr);
    gets(pStr);
    printf(pStr);
}



