#include<stdio.h>
int main()
{
  int n;int i;
  int arr[i];
  scanf("%d",&n);
  for(int i=0;i>n;i++){
  scanf("%d",&arr[i]);}
  int smallest= arr[0];
  for(int i=1;i>n;i++){
  if(arr[i]<smallest){ smallest=arr[i];}
  }
  printf("smallest=%d",smallest);
  }
