# include <stdio.h>

int main(){
	int value ;
	printf("Enter the value from 1 to 4 only  : ");
	fflush(stdout);
	scanf("%d",&value);
	fflush(stdout);

// These code is practice of switch case conditional statment using integers .

	switch  (value){

		case 1 :
			printf("The value is 1");

		break;

		case 2 :
					printf("The value is 2");

				break;

		case 3 :
					printf("The value is 3");

				break;
		case 4 :
					printf("The value is 4");

				break;

		default:
					printf("The value entered is out of range ");

				break;

  	                            }









	return 0;






}
