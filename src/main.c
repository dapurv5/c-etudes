/* 
 * File:   main.c
 * Author: apurv
 *
 * Created on June 22, 2010, 7:49 PM
 */

#include <stdio.h>
#include <stdlib.h>

void beforeMain();

#pragma startup beforeMain 64;
/*
 * 
 */
static int e; //CAN BE USED ONLY IN THIS MODULE main.c
int x=3;      //EXTERN VARIABLE

void beforeMain(){
    printf("Before Main");
}


void staticVariable()
{
    e=3;
}

int main(int argc, char* argv[], char **envp)
{
    //system("ls");
    printf("Hello world from my first c program");
    //1:    inputCharacter();
    //2:    inputString();
    //3:    staticVariable();
    //4:    externVariable();
    //5:    pointers();
    //6:    structures();
    //7:    functionPointer();
    //8:    macroDefinition();
    //9:    typeDefDemo();
    arrayOfNodeDemo();

    // passByReference();
    // input();
    





    int count;

    // Display each command-line argument.
    printf( "\nCommand-line arguments:\n" );
    for( count = 0; count < argc; count++ )
        //printf( "  argv[%d]   %s\n", count, argv[count] );

    // Display each environment variable.
    printf( "\nEnvironment variables:\n" );
    while( *envp != NULL )
        //printf( "  %s\n", *(envp++) );


    return (EXIT_SUCCESS);
}


