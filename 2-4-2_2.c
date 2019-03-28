#include<stdio.h>
int mul(int a,int b)
{
    int c;
    c = a* b;
    return(c);
}
int main(void)
{
    int n1,n2,result;
    pintf("please input the two numbers:\n");
    scanf("%d%d",&n1,&n2);
    result = nul(n1,n2);
    printf("the result is :%d\n",result);
    return 0;
}
