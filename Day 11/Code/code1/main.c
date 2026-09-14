# include <stdio.h>
// This was a simple  practice of while loop but i have made it little more complex by adding one more parameter.
int main()
{
	int n = 1, i = 1;

	while(n<=10){

		printf("%d\n",n);
		fflush(stdout);
		//n++;
		i++;
		fflush(stdout);
		if (i <= 11){

			n++;
		}

	}






	return 0;
}
