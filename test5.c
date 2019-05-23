#include<stdio.h>
int main()
{
    int ch=0;
    printf("Please enter lowercase letter:\n");
    scanf("%c",&ch);
    printf("%c = %d\n",ch,ch);
    ch = ch-32;
    printf("%c = %d\n",ch ,ch);

    return 0;
}
