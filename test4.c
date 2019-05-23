#include<stdio.h>
int main()
{
    int num1 =123;
    long num2 =123456;
    printf("num1 = %d,num1=%5d,num1=%-5d,num1=%2d\n",num1,num1,num1,num1);
    printf("num2=%ld,num2=%8ld,num2=%5ld\n",num2,num2,num2);
    printf("num1=%ld\n",num1);

    return 0;
}
