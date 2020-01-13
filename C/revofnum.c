#include <stdio.h>
int main8()
{
  int n;
  printf("Enter Number: ");
  scanf("%d",&n);
  printf("\n\n");
  while(n>0)
  {
    int last = n%10;
    n/=10;
    printf("%d",last);
  }
  printf("\n\n");
  return 0;
}
