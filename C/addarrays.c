#include <stdio.h>
int main98()
{
  int num[3][3],num1[3][3],add[3][3];
  //add elements
  printf("Enter Elements in 1: \n");
 for(int i=0;i<3;i++)

 {
   for(int j=0;j<3;j++)
   scanf("%d",&num[i][j] );
 }

  printf("Enter Elements in 2: \n");
 for(int i=0;i<3;i++)

 {
   for(int j=0;j<3;j++){
   scanf("%d",&num1[i][j] );
 }
  }
    printf("\n");


//addition
 for(int i=0;i<3;i++)


    {
        for(int j=0;j<3;j++)
        {
        add[i][j]=num[i][j]+num1[i][j];
        }
    }

    printf("\n");
    printf("\n");
 //show elements

for(int i=0;i<3;i++)
{
  for(int j=0;j<3;j++)
  {
  printf("%d ",add[i][j] );
  }
    printf("\n");
}

return 0;
}
