#include<stdio.h>
void main()
{
    int A[100][100],tran[100][100],m,n,i,j;
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
    for ( i = 0; i <m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            tran[i][j]=A[i][j];
        }
        
    }
        printf("MATRIX ARE:\n");
    for ( i = 0; i < m; i++)
    {
        printf("\n");
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",A[i][j]);
        }
        
    }
    printf("\n");
    printf("\n transpose OF GIVEN MATRIX ARE:\n");
    for ( i = 0; i < n; i++)
    {
        printf("\n");
        for ( j = 0; j < m; j++)
        {
            printf("%d\t",tran[j][i]);
        }
        
    }
    printf("\n");
}