#include<stdio.h>
void set_or_not(int reg, int bit_pos)
{
	if(reg&(1<<bit_pos))
	{
		printf("SET");
	}
	else
		printf("NOT SET");
}
int main()
{
	int reg,bit_pos;
	scanf("%d%d",&reg,&bit_pos);
	set_or_not(reg,bit_pos);
	return 0;
}
