#include<stdio.h>
void main()
{
    int prncpl,rate,time;
    float SI=0;
    printf("Enter Principal amount time \n");
    scanf("%d%d%d",&prncpl,&rate,&time);
    SI=(prncpl*rate*time)/100;
    printf("Simple intrest :%f\n",SI);
}