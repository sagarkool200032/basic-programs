#include <stdio.h>
int main9999()
{
  int num[100],n;
  printf("Enter No. of elements:");
  scanf("%d",&n );
  printf("Enter Numbers: \n");

  for(int i=0;i<n;i++)
  {
    scanf("%d",&num[i]);
  }


      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                int g = num[j];
                int l = num[j+1];
                num[j] = l;
                num[j+1] = g;
            }
        }
    }
  printf("\n\n\n");
  printf("Ascending order:");
  for(int i=0;i<n;i++)
  {
    printf(" %d",num[i]);
  }
  printf("\n\n\n");
  printf("Largest Number: %d\n",num[n-1]);
  printf("\n\n");
  printf("Smallest Number: %d\n",num[0]);
  return 0;
}
