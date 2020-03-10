#include<stdio.h>
void main()
{
    int i,ar[50],n,sum=0;
    float avg;
    printf("Enter how many numbers u wanna print\n");
    scanf("%d",&n);
    printf("Enter marks :\t");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
       // printf("%d\t",ar[i]);
        sum=sum+ar[i];
        avg= sum/(float)n;
    }
    printf("\nSUM of marks\t:%d\n",sum);
    printf("Average is \t:%.2f\n",avg);
    
}