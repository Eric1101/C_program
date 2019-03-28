#include<stdio.h>
#include<math.h>
int getLength(long int num)
{
    int found,length;
    found=0;
    length=10;
    if(num==0) return 1;
    while(found==0)
    {
        if(num/(int)pow(10,length-1)>0) found =1;
        else length-=1;
    }
    return(length);
}
int isHuiWenShu(long int num)
{
    long int n;
    int left;
    int right;
    int i;
    int flag;

    i =getLength(num);
    n =num;
    flag=0;
    while(i>1&&flag==0)
    {
        left=n/(int)pow(10,i-1);
        right=n%10;
        n =n%(int)pow(10,i-1)/10;
        i-=2;
        if(left!=right) flag=1;
    }
    if(flag==0) return 1;
    else return 0;
}
int main(void)
{
    long int num;
    scanf("%d",&num);
    if(isHuiWenShu(num))
        printf("%ld is HuiWenShu\n",num);
    else
        printf("%ld is not HuiWenShu\n",num);
    return 0;
}
