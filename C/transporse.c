#include <stdio.h>
int main99()
{
    int m,n;
    printf("Enter Rows: ");
    scanf("%d",&m);
    printf("Enter Columns: ");
    scanf("%d",&n);
    int mat[m][n],trans[m][n];
    printf("Enter Elements:\n");
    //adding elements
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {

            scanf("%d",&mat[i][j]);
        }

    }
    //transpose
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            trans[i][j] = mat[j][i];
        }

    }

    printf("\n\n");
    //showing elements
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;

}
