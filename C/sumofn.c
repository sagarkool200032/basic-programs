#include <stdio.h>
int sumof(int n);
int sumof1(int *ptr);
int fact(int n);

int main6()
{
  int n;
  printf("Enter Number: ");
  scanf("%d",&n);
  printf("SUM: %d\n",sumof(n));
  printf("SUM using pointers: %d\n",sumof1(&n));
  printf("Factorial: %d\n",fact(n));
  return 0;
}

int sumof(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
  {
    sum+=i;
  }
  return sum;
}

int sumof1(int *ptr)
{

    int sum=0;
    for(int i=1;i<=*ptr;i++)
  {
    sum+=i;
  }
  return sum;
}

int fact(int n)
{
    int sum=1;
    for(int i=1;i<=n;i++)
  {
    sum*=i;
  }
  return sum;
}
