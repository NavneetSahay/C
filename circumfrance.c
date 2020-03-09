#include<stdio.h>
void main()
{
    int r;
    float ar=0,crcm;
    printf("Enter radius of circle\n");
    scanf("%d",&r);
    crcm=3.14*2*r;
    ar=3.14*r*r;
    printf("Circumference of circle:%f\n",crcm);
    printf("area: %f \n",ar);
}