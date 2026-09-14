
/* This is a same if else practice code but here 2 extra conditions were introduced
 *

 */
# include <stdio.h>

int main(){
	float num1,num2 ;
	printf("Enter the num1 and num2 : \n");
	fflush(stdout);
	if (scanf("%f %f",&num1,&num2) == 0 )
	{
		printf("invalid inputs___exiting \n");

/* * First change up here  if input is non numeric then  a warning will show and the program will be
		 * terminated without executing rest of the code*/

		return 0 ;
	}
	fflush(stdout);
int inum1,inum2;
inum1 = num1;
inum2 = num2;

/*Second change is whenever the user input a float value it will take it but only compare the
 * interger part and give the output accordingly.and it will show warning already that only interger part is
 * being compared .
 */

if((inum1 !=num1 )  || (inum2 != num2))  printf("Note : Only interger part is getting compared \n");
	if(inum1 == inum2 ){

		printf("Num1 is equal to Num2 \n");

	}
	else{
		 if(inum1 < inum2){
			printf("Num2 is greater \n");

		}
		else {
			printf("Num1 is greater \n");
		}
	}





	return 0;
}
