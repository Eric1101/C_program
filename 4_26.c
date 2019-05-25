#include<stdio.h>
int main(void)
{
    int n=1 , sum =0;
    loop: sum+=n;n++;
    if(n<=100) goto loop;
    printf("sun =%d\n",sum);
    return 0;
}
