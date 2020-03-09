#include<stdio.h>
void main()
{
    float dg,frnht=0;
    printf("Enter temperature in degree:\t");
    scanf("%f",&dg);
    frnht=(dg*9/5)+32;
    printf("Temprature in frnht :%f\n",frnht);
}