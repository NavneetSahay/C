#include<stdio.h>
void main()
{
    int A[100][100],B[100][100],sub[100][100],m,n,i,j;
    printf("Enter order of matrix (row _  column) :\t");
    scanf("%d%d",&m,&n);
    printf("Enter Elements of first matrix\t:");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }
    printf("Enter Elements of Second matrix\t:");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&B[i][j]);
        }
        
    }
    for ( i = 0; i <m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            sub[i][j]=A[i][j]-B[i][j];
        }
        
    }
    printf("SUB OF GIVEN MATRIX ARE:\n");
    for ( i = 0; i < m; i++)
    {
        printf("\n");
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",sub[i][j]);
        }
        
    }
    printf("\n");
}
