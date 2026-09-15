# include <stdio.h>
# include <stdint.h>


struct dataset{
	char data1;
	int data2;
	char data3;
	short data4;

};
// we can use "__attribute__((packed));" So the data is stored in packed form in the memory so lesser memory is used.
// but it increases the complexity of program.
int main(){


	struct dataset data;
	data.data1 = 0x11;
	data.data2 = 0xffffeeee;
	data.data3 = 0x99;
	data.data4 = 0xdcba;

	printf("The siz e of data is :%u \n ",sizeof(data));
uint8_t *ptr ;
ptr = (uint8_t *)&data;
uint32_t sizeofdata =sizeof(data);
for(uint32_t i = 0; i < sizeofdata; i++)
{
	printf("%p  %x \n",ptr,*ptr);
	ptr++;
}





	return 0 ;
}
