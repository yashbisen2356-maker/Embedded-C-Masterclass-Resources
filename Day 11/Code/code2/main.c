#include <stdio.h>
#include <stdint.h>
int choice;
int c;
int main(){

printf("Enter the choice : \n");
fflush(stdout);
scanf("%d",&choice);
//fflush(stdout);

 do{

  	switch (choice){
  	    case 1:
  			 printf("The Entered Choice is 1 : \n");

  		break;
  		case 2:
  			 printf("The Entered Choice is 2 : \n");
  		break;
  		case 3:
  			 printf("The Entered Choice is 3 : \n");
  		break;

  		case 4:
  			 printf("The Entered Choice is 4 :  \n");
  		break;
  		default:
  			 printf("Out of Range \n");
  		break;

  		}


printf("Enter the choice : ");
fflush(stdout);
scanf("%d",&choice);
printf("Do you Wanna Continueeeeeee :  \n");
fflush(stdout);
scanf("%d",&c);
			//fflush(stdout);









	}
while(c == 1);
printf("Program is Terminated ");







	return 0;
}
