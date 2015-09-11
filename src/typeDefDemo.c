/*
 * File:   main.c
 * Author: apurv
 *
 * Created on June 22, 2010, 7:49 PM
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int day;
    int month;
    int year;
}Date;

void display(Date *date){
    int d=date->day;
    int m=date->month;
    int y=date->year;
    printf("%d/%d/%d",d,m,y);
}

void typeDefDemo () {
    Date birthday;
    birthday.day=3;
    birthday.month=10;
    birthday.year=1990;

    display(&birthday);

    //or

    typedef int IntegerArray[10];
    IntegerArray a={1,2,3,4,5,6,7,8,9,0};
    


}



