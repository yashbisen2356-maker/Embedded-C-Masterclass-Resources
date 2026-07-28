# include <stdio.h>

void change_system_clock(int sys_clk);
void file_myfunc();
int main()
{
    change_system_clock(3);
    file_myfunc();

    return 0;
}

void change_system_clock(int sys_clk)
{
    printf("system clock is changed to %d \n",sys_clk);


}
