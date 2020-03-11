#include<stdio.h>
void main()
{
    int arr[50],max,n,i;
    printf("Enter how many numbers u wanna enter\t:");
    scanf("%d",&n);
    printf("Enter ur numbers \t:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for ( i = 0; i < n; i++)
    {
       if (arr[i]>max)
       {
         max=arr[i];
       }
       
    }
    
    printf("maximu \t:%d\n",max);
}