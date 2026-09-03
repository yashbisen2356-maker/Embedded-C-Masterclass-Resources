#include <stdio.h>
#include "math.h"


int main()
{


	printf("The sum is %d \n",math_add(0x0fff1111,0x0fff1111));

	printf("The product is %64llx \n",math_mul(0x0fff1111,0x0ffff1111));

	printf("The division is %f \n",math_div(100,8));


    return 0;
}
