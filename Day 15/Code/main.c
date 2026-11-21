
#include <stdio.h>
#include <stdint.h>

int main()
{
  uint8_t const data = 10 ;
  // data = 11;
  
  uint8_t *ptrdata;
 
printf("%d\n",data);
   *ptrdata = &data;
  *ptrdata  = 20 ;
  printf("%d\n",data );
  

    return 0;
}