#include<stdio.h>
int main(void)
{
    int num ,mask,i;
    printf("Input a integer number:");
    scanf("%d",&num);
    mask = 1<<15;
    printf("%d=",num);
    for(i=1;i<=16,i++)
    {
        putchar(num&mask ?'1':'0');
        num =num <<1;
        if(i%4 == 0) putchar(',');
    }
printf("\bB\n");
return 0;
}
