#include<stdio.h>
void main()
{
    int i,first,last,sum=0;
    printf("Enter upto numbers number\n");
    scanf("%d%d",&first,&last);
    for ( i = first; i <= last; i=i+2)
    {
        sum=sum+i;
        printf("%d\t",i);
    }
    printf("\nSUM \t:%d\n",sum);
}