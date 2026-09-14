// This is a kind of tax on income calculator . For Given income.

# include <stdio.h>

int main(){

int income , tax;
printf("Enter the income : \n");
fflush(stdout);
scanf("%d",&income);
fflush(stdout);

   if (income <= 9525 )
   {
	tax = 0;

     }
    else if((income > 9525) && (income <= 38700) ){
	    tax = income * 0.12;

     }
    else if((income > 38700) && (income <= 82500)){
	    tax = income * 0.24;

       }
     else if(income > 8250 ){
	tax = income *  0.32;
			tax = tax + 1000;

        }

 	printf("Tax for you is ; %d",tax);








	return 0;
}

