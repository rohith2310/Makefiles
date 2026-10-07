#include<stdio.h>
int bit_toggle(int num,int bit_pos)
{
	num^=(1<<bit_pos);
	return num;
}
int main()
{
	int num,bit_pos;
	scanf("%d%d",&num,&bit_pos);
	printf("%d",bit_toggle(num,bit_pos));
	return 0;
}
