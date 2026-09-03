#include <stdio.h>

int add(int a , int b);
float div(float a , float	 b);

float div(float  a , float b)
{

// Here we have a example of typecasting if here we don't add float then we will get wrong answer becaue in division we need answers in decimal points so to get better result we should use the float .
	int c = (float) a / b ;
     return c ;



}
int add(int a , int b)
{


	int c = a + b ;
     return c ;



}

int main()
{
 int c = add(10, 20);
 float d = div(40000, 20);
	printf("The sum c is : %d \n",c);
	printf("The div d is : %f \n",d);




    return 0;
}

