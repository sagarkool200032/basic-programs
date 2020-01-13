#include <stdio.h>
int main()
{
    int n1[3]={4,4,4},n2[3]={6,6,6},n[3];
    for(int i=0;i<3;i++)
    {
            n[i]=n1[i]+n2[i];
    }

    for(int i=0;i<3;i++)
    {
            printf("%d ",n[i]);
    }
    printf("\n\n");
    return 0;
}
