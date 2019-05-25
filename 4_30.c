#include<stdio.h>
int main()
{
    int i,r;
    printf("Input an integer\n");
    scanf("%d",&i);
    do
    {
        r=i%10;
        printf("%d",r);
        i=i/10;
    }while((i/10)<0);
    printf("\n");
    return 0;
}
