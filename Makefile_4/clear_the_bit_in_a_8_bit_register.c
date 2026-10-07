#include<stdio.h>
#include<stdint.h>
int set_bit(uint8_t reg,int bit_pos)
{
	reg|=(1<<bit_pos);
	return reg;
}
int main()
{
	uint8_t reg;
	int bit_pos;
	scanf("%hhu%d",&reg,&bit_pos);
	printf("%d",set_bit(reg,bit_pos));
	return 0;
}
