#include<stdio.h>
void main()
{
    int a,b,c,d,e,sum=0;
    float pr=0;
    printf("Enter marks of 5 subject\t");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    pr=(sum*100)/500;
    printf("SUM of marks %d \n perentage:%f\n",sum,pr);
}