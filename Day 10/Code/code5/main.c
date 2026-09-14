# include <stdio.h>

int main(){
	int age ;
	printf("Enter the age : ");
	fflush(stdout);
	scanf("%d",&age);
	fflush(stdout);


	/*if (age <18){

		printf("Not eligible to vote" );
	}
	if (age >= 18){

			printf( "Eligible to vote" );
		}

*/

// These is practical example of Conditional operator.

 (age<= 18)?printf("You are not eligible to vote \n"):printf("Eligible to vote \n");



	return 0;
}
