
#include <stdio.h>
void file_myfunc();
int privatedata;
int main()
{
    privatedata = 50;
    printf("Privatedata %d , \n",privatedata);
    file_myfunc();
    printf("Privatedata %d , \n",privatedata);

}

