#include,stdio.h>
int main()
{
int a,b;
printf("\n enter the value of a and b");
scanf("%d%d",&a,&b);
printf("%d",a&b);
printf("\n%d",a|b);
printf("\n%d",a^b);
printf("\n%d",~a);
printf("\n%d",a>>1);
printf("\n%d",a<<1);
}
