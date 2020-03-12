#include<stdio.h>
void main()
{
    int arr[100][100],m,n,i,j;
    printf("Enter numbers of row and column \t:");
    scanf("%d%d",&m,&n);
    printf("Enter Elements \t:");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("ENTERED MATRIX ELEMNTS ARE:\n");
    for ( i = 0; i < m; i++)
    {
        printf("\n");
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        
    }
    printf("\n");
}