#include <stdio.h>
int main10()
{
  int n,count=0;
  printf("Enter Number: ");
  scanf("%d",&n);
  printf("\n\n");
  while(n>0)
  {
    n/=10;
    count++;
  }
  printf("No. of digits: %d",count);
  printf("\n\n");
  return 0;
}
