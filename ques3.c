#include<stdio.h>
int main()
{
  int grade;
  scanf("%d",&grade);
   
  if(grade>=90 && grade<=100)
  printf("Grade:A");
  
  else if(grade<90 && grade>=70)
  printf("Grade B");
  
  else if(grade<70 && grade>=50)
  printf("Grade C");
  
  else(grade<50 && grade>=0);
  printf("Grade D");
  
  return 0;
}
