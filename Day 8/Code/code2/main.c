# include <stdio.h>


long long int data = 0xffffeabcd114425;
int main ()
{
int *paddress;

paddress = (int*) &data;

printf ("Address of data is : %p \n ", &data);
printf ("The value stored in the paddress %p and its pointed var value is %x \n", paddress,*paddress);

paddress = paddress+1;


printf ("The value stored in the paddress %p and its pointed var value is %x \n", paddress,*paddress);

	return 0 ;
}
