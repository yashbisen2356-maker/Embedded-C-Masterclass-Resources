

#include <stdio.h>


void file_myfunc();
int pd;
int main()
{
// here we can see how we used extern storage type to change the value of privated data variable from a different fuciton which is in a different file.
	pd = 500;
	printf("Privatedata %d , \n",pd);
	file_myfunc();
	printf("Privatedata %d, \n",pd);

    return 0;
}

