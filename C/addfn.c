#include <stdio.h>
#include <math.h>
int add(int n1, int n2)
{
  return n1+n2;
}

int main3()
{
  int a,b;
  printf("Enter 2 Numbers: ");
  scanf("%d%d",&a,&b );
  printf("%d\n",(int)sqrt(add(a,b))) ;
  return 0;

}
