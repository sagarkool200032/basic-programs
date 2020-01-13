#include <stdio.h>
int sum(int * nums, int l);

int  main()
{
  int n;
  printf("Enter No. of elements Of ARRAY: ");
  scanf("%d",&n );
  int num[n];
  printf("Enter elements: \n");
  //adding elements in array
  for (int i=0;i<n;i++)
  {
    scanf("%d",&num[i] );
  }
  printf("\nSum of Array: %d\n",sum(num,(sizeof(num)/sizeof(num[0]))) );
  return 0;
}

int sum(int * nums, int l)
{
  int sum=0;
  for(int i=0;i<l;i++)
  {
    sum+=*nums++;
  }
  return sum;
}
