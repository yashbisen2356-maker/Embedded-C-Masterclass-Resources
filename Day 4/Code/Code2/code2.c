

#include <stdio.h>

void myfunc();

int main()
{
myfunc();
myfunc();
myfunc();

    return 0;
}

void myfunc()
{
	// herer we can see the use of static storage class in variable, just remove and see the difference in output.
	static  int count = 0 ;
	count = count +1;
	printf("The value of count is : %d \n",count);

}










