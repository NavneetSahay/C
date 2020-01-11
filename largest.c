#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("Enter 3numbers \t");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>=num2&&num1>=num3)
   printf("greates number is num1 :%d\n",num1);
else if(num2>=num1&&num2>=num3)
   printf("greates number is num2 :%d\n",num2);
else
   printf("Greater number is num3 :%d\n",num3);
return 0;
}
