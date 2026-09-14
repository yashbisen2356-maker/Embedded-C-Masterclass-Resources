

# include <stdio.h>

int main(){
	int num1,num2 ;
	printf("Enter the num1 and num2 : ");
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	fflush(stdout);

	if(num1 == num2 ){

		printf("Num1 is equal to Num2");

	}
	else{
		 if(num1 < num2){
			printf("Num2 is greater");

		}
		else {
			printf("Num1 is greater");
		}
	}





	return 0;
}
