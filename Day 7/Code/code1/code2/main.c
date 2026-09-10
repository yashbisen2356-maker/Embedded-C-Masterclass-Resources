# include <stdio.h>
# include <stdint.h>

int main ()
{
	float f = 14.14123414124;
	double g = 14.14123414124;
	double e = 14.14123414124;
	printf("The value of F as float is %f \n",f);
	printf("The value of g as double is %0.9lf \n ",g);
	printf("The value of e as scientific notation  is %0.9ef \n",e);

}
