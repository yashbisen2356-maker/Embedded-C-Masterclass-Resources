# include <stdio.h>

int main(){
	char Alphabet ;
	printf("Enter the Alphabet from a to d only  : ");
	fflush(stdout);
	scanf("%c",&Alphabet);
	fflush(stdout);

// These code is practice of switch case conditional statment using Characters .

	switch  (Alphabet){

		case 'a' :
			printf("The value is a");

		break;

		case 'b':
					printf("The value is b");

				break;

		case 'c':
					printf("The value is c");

				break;
		case 'd':
					printf("The value is d");

				break;

		default:
					printf("The Alphabet entered is out of range ");

				break;

  	                            }









	return 0;






}
