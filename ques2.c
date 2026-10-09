#include<stdio.h>
int main()
{
  int x,y,z;
  scanf("%d%d%d",&x,&y,&z);
  
  if(x>y && x>z)
  printf("X is the largest among the three integers");
  
  else if(y>x && y>z)
  printf("Y is the largest among the three integers");
  
  else
  printf("Z is the largest among the three integers");
  
  return 0;
  
}
