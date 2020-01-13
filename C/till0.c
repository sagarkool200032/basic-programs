#include <stdio.h>
int main9()
{
  int n = -1;
  int sum = 0;
  while(n!=0)
  {
    printf("Enter Number: ");
    scanf("%d",&n );
    sum+=n;
  }
  printf("SUM: %d",sum);
  return 0;
}
