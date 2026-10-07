#include<stdio.h>
int toggle(int reg,int bit_pos)
{
        if(reg&(1<<bit_pos))
        {
                reg&=~(1<<bit_pos);
        }
        else
                reg|=(1<<bit_pos);
        return reg;
}
int main()
{
        int reg,bit_pos;
        scanf("%d%d",&reg,&bit_pos);
        printf("%d",toggle(reg,bit_pos));
        return 0;
}

