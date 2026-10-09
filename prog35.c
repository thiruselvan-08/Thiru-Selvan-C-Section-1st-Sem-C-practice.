#include<stdio.h>
int main()
{
int x;
printf("\n enter the number");
scanf("%d",&x);
if(x%2==0 && x>0)
{
printf("\n the number is even number",x);
}
else if(x%2!=0)
{
printf("\n the number is odd number",x);
}
else
{
printf("\n enter the valid number");
}
return 0;
}
