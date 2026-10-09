#include<stdio.h>
int main()
{
  int x,y,z,rent,sp;
  scanf("%d%d%d%d%d",&x,&y,&z,&rent,&sp);
  sp=(x*y)-(x*z);
  printf("The profit is%d",sp-rent);
  return 0;

}
