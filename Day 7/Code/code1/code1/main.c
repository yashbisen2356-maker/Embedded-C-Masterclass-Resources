# include <stdio.h>
# include <stdint.h>

int main ()
{
	int a , b, c,d;
	printf("Enter the value of a,b c \n ");
	fflush(stdout);

	scanf("%d %d %d",&a ,&b, &c);

	printf ("The values entered for a,b,c are :  %d %d %d \n",a,b,c);

d = (a+b+c)/3;
	printf ("The average  for a,b,c is :  %d  \n", d);

	 	 getchar();

		getchar();

}
