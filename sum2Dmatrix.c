#include<stdio.h>
void main()
{
    int A[2][2],B[2][2],sum[2][2],i,j;
    printf("Enter Elements of first matrix\t:");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }
    printf("Enter Elements of Second matrix\t:");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d",&B[i][j]);
        }
        
    }
    for ( i = 0; i <2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            sum[i][j]=A[i][j]+B[i][j];
        }
        
    }
    printf("SUM OF GIVEN MATRIX ARE:\n");
    for ( i = 0; i < 2; i++)
    {
        printf("\n");
        for ( j = 0; j < 2; j++)
        {
            printf("%d\t",sum[i][j]);
        }
        
    }
    printf("\n");
}