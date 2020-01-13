#include <stdio.h>
int main97()
{
  int num[10],g=0,n=0;
  printf("Enter No. of Numbers:");
  scanf("%d",&n );
  printf("Enter Numbers: \n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&num[i]);
    if(num[i]>g)
     g=num[i];

  }

  printf("Largest Number: %d\n",g);
  return 0;
}
