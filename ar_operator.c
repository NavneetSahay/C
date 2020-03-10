#include<stdio.h>
void main()
{
    int num1,num2,swtch,sum=0,sub=0,mul=0;
    float div=0;
    printf("Enter two number\n");
    scanf("%d%d",&num1,&num2);
    printf("Enter\n1.ADD\t2.sub\n3.mul\t4.div\n ");
    scanf("%d",&swtch);
    switch (swtch)
    {
    case 1:
        sum=num1+num2;
        printf("Sum \t:%d\n",sum);
        break;
    case 2:
        sub=num1-num2;
        printf("Subtract \t:%d\n",sub);
        break;
    case 3:
        mul=num1*num2;
        printf("multiply is \t:%d\n",mul);
        break;
    case 4:
        div=num1/num2;
        printf("divison is \t:%f\n",div);
        break;
    default:
         printf("Enter valid expression\n");
        break;
    }
}