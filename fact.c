#include<stdio.h>
void main()
{
    int temp,num,fact=1;
    printf("Enter number\t");
    scanf("%d",&num);
    while (num>0)
    {
    fact=fact*num;
    num--;
    }
  printf("FACTORIAL \t:%d\n",fact);
}