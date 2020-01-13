#include <stdio.h>
int main98()
{
    int r1,r2,c1,c2;
    printf("Enter Rows MATRIX 1: ");
    scanf("%d",&r1);
    printf("Enter Columns MATRIX 1: ");
    scanf("%d",&c1);
    printf("Enter Rows MATRIX 2: ");
    scanf("%d",&r2);
    printf("Enter Columns MATRIX 2: ");
    scanf("%d",&c2);
    int m1[r1][c1],m2[r2][c2],mx[r1][c2];
    printf("Enter Elements in Matrix 1:\n");
    //adding elements
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {

            scanf("%d",&m1[i][j]);
        }

    }
    printf("Enter Elements in Matrix 2:\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {

            scanf("%d",&m2[i][j]);
        }

    }
    //multiplication
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            mx[i][j] = 0;
            for(int k =0;k<c1;k++)
            {
                mx[i][j] += m1[i][k]*m2[k][j];
            }
        }

    }

    printf("\n\n");

    //showing elements
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",mx[i][j]);
        }
        printf("\n");

    }
    printf("\n");
    return 0;

}

