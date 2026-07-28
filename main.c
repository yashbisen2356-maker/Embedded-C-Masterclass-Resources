/*
 * main.c
 *
 *  Created on: Jul 19, 2026
 *      Author: YASH
 */



#include <stdio.h>


int a = 5 ;


int main()
{
unsigned  long  int addressofa = (unsigned long  int)&a;
printf("The address of a is %p \n",&a );
printf("The address of a is %ld",addressofa);
    return 0;
}
