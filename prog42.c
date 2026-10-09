#include<stdio.h>
int main()
{
int a,b;
printf("\n enter the value of a and b:");
scanf("%d%d",&a,&b);
for(int i=a;i<=b;i++)
{
printf("\n%d",i*i);
}
return 0;
}
