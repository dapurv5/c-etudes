/*
 *This file demonstrates the new types that come with C99 and are used with pintos.
 */

#include<stdbool.h>
#include<stdint.h>

void typesDemo(){

    /*stdbool.h*/
    bool a=true;

    /*stdint.h*/
    int32_t value=234;

    char character='a';
    char *ptr=&character;
    intptr_t intptr=ptr;
    printf("Value referenced by intptr_t is %i",&intptr);

}