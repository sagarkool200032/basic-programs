#include <stdio.h>
int counter(int n);
int main99()
{
  int n;
  printf("Enter Number: ");
  scanf("%d",&n);
  printf("\n\n");
  printf("No. of digits: %d",counter(n));
  printf("\n\n");
  return 0;
}

int counter(int n)
{
  int count = 0;
  while(n>0)
  {
    n/=10;
    count++;
  }
  return count;
}
