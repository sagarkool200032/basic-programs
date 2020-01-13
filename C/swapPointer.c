#include <stdio.h>
void swap(int * n1,int * n2);
int main7()
{
  int num_1,num_2;
  printf("Enter 2 numbers: ");
  scanf("%d%d",&num_1,&num_2 );
  swap(&num_1,&num_2);
  printf("\nValue Of Number 1: %d\nValue Of Number 2: %d\n",num_1,num_2);
  return 0;
}
void swap(int * n1, int * n2)
{
  *n2 = *n1+*n2-(*n1=*n2);
}
