# include <stdio.h>

int main ()
{
  int data = 100;
  int *pointervar = &data;

	// reading using pointer
  int value = *pointervar ;

	printf("Address of data is : %p \n",&data);
	printf("Value stored in the Pointer variable is : %d \n",value);
	printf("Value stored in the Pointer variable is : %d \n",data);
	printf("Value stored in the Pointer variable is : %d \n",*pointervar);
	// writing operation using pointer variable

	*pointervar = 60;
	printf("The new value of data is %d \n ",data);


	return 0 ;

}
