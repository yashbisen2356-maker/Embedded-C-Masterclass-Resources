
#include <stdio.h>

int main()
{
    unsigned char distanceAtoB = 30;
    unsigned char distanceBtoC = 70;
    unsigned char Totaldistance = 30;
    unsigned char size = sizeof(Totaldistance);
         
  Totaldistance = distanceAtoB + distanceBtoC;
  printf("The total distance is %d \n",Totaldistance);
  
  // to find size of data type we use sizeof:
  printf("The size of char is  %d \n",sizeof(char));
  printf("The size of int is  %d \n",sizeof(int));
printf("The size of short is  %d \n",sizeof(short));
  printf("The size of long is  %d \n",sizeof(long));
    printf("The size of Totaldistance is  %d \n",sizeof(char));
  
return 0;
}
