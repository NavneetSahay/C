#include<stdio.h>
void main()
{
    int i,digit,first=1,last=10;
    printf("Enter number for table\t");
    scanf("%d",&digit);
    printf("Enter from START to upto END\n");
    scanf("%d%d",&first,&last);
    for (i=first;i<=last;i++)     
    printf("%d X %d : \t%d\n",digit,i,digit*i);
}