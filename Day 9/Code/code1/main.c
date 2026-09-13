// This a excercise 1 code.

# include <stdio.h>

int main()
{

	unsigned int number , mask, result;
	printf("Enter the number : ");
	scanf ("%u",&number);

	mask = (1<<3) | (1<<6);
	result = number | mask ;
	printf("The result is : %u",result);
	return 0 ;

}
