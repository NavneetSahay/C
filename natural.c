#include<stdio.h>
void main()
{
    int i,last,sum=0;
    printf("enter last digit\n");
    scanf("%d",&last);
    for ( i = 1; i <= last; i++)
    {
        sum=sum+i;
        printf("%d\t",i);
       // printf("\nSUm\t:%d\n",sum);
    }
 printf("\nSUm\t:%d\n",sum);
}