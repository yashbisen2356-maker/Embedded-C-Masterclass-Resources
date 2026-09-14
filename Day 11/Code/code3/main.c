#include <stdio.h>
#include <stdint.h>


int main()
{

/*	for(int a = 100; a <200; a= a+10){
		printf("The value of a is %d \n",a);
	}
*/

	//Other way to declare for loop
	//for multiple varible and multiple condition the condition with
	// highest limit will consider like see here for k.

int a,b,k;

	for(a = 1,b=2,k=20; a <2,b<5,k<30;a++){
			printf("The value of a, b , k is %d %d %d  \n",a,b,k);
			b++;
			k++;
		}







	return 0;
}
