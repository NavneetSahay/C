#include<stdio.h>
void main()
{
    int num,first=1,last=10,i,j; 
    int sum=0;
    printf("Enter term upto u wanna print\t");
    scanf("%d%d",&first,&last);
    for ( i = first; i <= last; i++)
    {
        sum=sum+i;
        printf("1/%d\t",i);
    }   
    printf("\nSUM is\t:1/%d\n",sum);
    
}