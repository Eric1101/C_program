#include<stdio.h>
int main()
{
    float radius, length ,area;
    float Pi=3.1415926;
    printf("Please enter radius:\n");
    scanf("%f",&radius);
    area=Pi*radius*radius;
    length=2*Pi*radius;

    printf("length = %f\narea = %f\n",length,area);
    return 0;
}
