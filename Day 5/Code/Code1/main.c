

#include <stdio.h>
// this function are non return type so they don't return any value in the main code in the file code the return type fucitons practical implementation is done.

void add();
void mul();

void add1(){

	int a =50 , b = 60;
	int c = a + b ;
	printf("The  sum  c is : %d \n",c);



}

void mul(){

	int a =50 , b = 60;
	int c = a * b ;
	printf("The  product is c : %d \n",c);



}
int main()
{

	add1();
    mul();
    return 0;
}

