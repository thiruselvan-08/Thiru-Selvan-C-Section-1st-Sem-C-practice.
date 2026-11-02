#include<stdio.h>
int add(int x,int y){
printf("%d ",x+y);
}
int main()
{
  int a,b;
  
  scanf("%d%d",&a,&b);
  add(a,b);
  
  scanf("%d%d",&a,&b);
  sub(a,b);
  
  
  return 0;
}
