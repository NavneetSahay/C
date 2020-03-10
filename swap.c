#include<stdio.h>
void main()
{
    int a,b;
    printf("ENTER first nd second number\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("first number :%d,second number :%d\n",a,b);
}