#include <stdio.h>
int main()
{
  int num[10],sum=0,avg=0,n=0;
  printf("TOTAL Subjects :");
  scanf("%d",&n );
  printf("Enter Marks: \n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&num[i]);
  }
  for(int i=0;i<n;i++)
  {
    sum+=num[i];
  }
  avg = (sum/n);
  printf("Average of marks: %d\n",avg);
}
