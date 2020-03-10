#include<stdio.h>
int main()
{
    int *ptr1,*ptr2,first,second,sum=0;
    printf("Enter two numbers\n");
    scanf("%d%d",&first,&second);
    ptr1=&first;
    ptr2=&second;
    sum=*ptr1+*ptr2;
    printf("Sum is \t:%d\n",sum);
    return 0;
}