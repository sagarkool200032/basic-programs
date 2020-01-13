#include <stdio.h>
int main32()
{
    int n1[3][3]={{2,2,2},{2,2,2},{2,2,2}},n2[3][3]={{3,3,3},{3,3,3},{3,3,3}},n[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            n[i][j] = n1[i][j] + n2 [i][j];
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    return 0;
}
