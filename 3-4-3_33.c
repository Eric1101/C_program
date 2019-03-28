#include<stdio.h>
int main(void)
{
    int num,mask;
    printf("Input a integer number:");
    printf("%d",&num);
    num = num>>8;
    mask =~(~0<<4);
    printf("result=0x%x\n",num&mask);
    return 0;
}
