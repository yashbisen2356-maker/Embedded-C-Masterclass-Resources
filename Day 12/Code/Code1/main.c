# include <stdio.h>
# include <stdint.h>

struct cardetails
{
	uint32_t carnumber;
	uint32_t carprice;
	uint32_t carmaxspeed;
	float carweight;
};
int main(){
float readvar;
//This using the structure data types
struct cardetails lamo={9999,50,350,1200};
struct cardetails exter= {.carnumber=3428,.carprice=8,.carmaxspeed=200,.carweight=999};

// This code block shows how to access defined stuct data types items.
printf("The details of Lamo \n");
printf("The Car number is : %u \n",lamo.carnumber);
printf("The Car price is : %u \n",lamo.carprice);
printf("The Car max speed is : %u\n",lamo.carmaxspeed);
printf("The Car weightr is : %f\n",lamo.carweight);

// Below block shows how to rewrite structure defined data type variable items
exter.carnumber = 4343;
exter.carmaxspeed = 180;
exter.carprice =4;

printf("The details of Exter\n");
printf("The Car number is : %u\n", exter.carnumber);
printf("The Car price is : %u\n", exter.carprice);
printf("The Car max speed is : %u\n", exter.carmaxspeed);
printf("The Car weight is : %f\n", exter.carweight);


readvar= lamo.carweight;
printf("The lamo weight is : %f\n",readvar);



	return 0;

}
