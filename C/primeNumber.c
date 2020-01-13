#include <stdio.h>
int main5()
{
  int n,count=0;
  printf("Enter Number: ");
  scanf("%d",&n);
  for (int i = 1; i <= n; i++)
  {
    if(n%i==0)
    count+=1;
  }
  if(count==2)
  printf("\n----------->  %d is prime Number\n\n",n);
  else
  printf("\n----------->  %d is NOT prime Number\n\n",n);
  return 0;
}
