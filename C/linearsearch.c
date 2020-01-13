#include <stdio.h>
int main97()
{
    int n,key;
    printf("Total elements : ");
    scanf("%d",&n);
    int n1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&n1[i]);
    }
    printf("Enter Key : ");
    scanf("%d",&key);
    printf("\n");
     for(int i=0;i<n;i++)
    {
        if(key==n1[i])
        {
            printf("Index of Key %d: %d",key,i);
            printf("\n\n");
            return 0;
        }
        else
            continue;
    }

    return 0;
}

