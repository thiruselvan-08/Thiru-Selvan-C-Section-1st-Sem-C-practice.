#include<stdio.h>
int main()
{
int a,b,x;
printf("\n enter the fucking first value :");
scanf("%d",&a);
printf("\n enter the freaking second value of :");
scanf("%d",&b);
printf("\n 1.addition\n 2.subtraction\n 3.multiplication\n 4.division");
scanf("%d",&x);
if(x==1)
{
a+=b;
printf("the sum of the two values are:%d",a);
}
else if(x==2)
{
a-=b;
printf("the remainder of two values are:%d",a);
}
else if(x==3)
{
a*=b;
printf("the product of two values are:%d",a);
}
else if(x==4)
{
a/=b;
printf("the quotient of the two values are:%d",a);
} 
else
{
printf("optinon not found");
}
return 0;
}

