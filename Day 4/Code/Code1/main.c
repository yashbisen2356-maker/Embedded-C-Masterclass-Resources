

#include <stdio.h>

int a = 5;

int main()
{

 unsigned long  int addressofA = (unsigned long int) &a;
 printf("The address of a is %p \n ",&a);

 printf("The address of a is %ld \n ",addressofA);



    return 0;
}
