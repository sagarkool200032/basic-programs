#include <stdio.h>
#include <string.h>

int main19()
{
    int n=0,k;
    printf("How many strings you wanna sort: ");
    scanf("%d",&n);
    char str[25][50],str1[25];
    for(int i=0;i<n;i++)
    {
        scanf(" ");
        gets(str[i]);

    }
    printf("\n\n*********************AFTER  SORTING************************\n\n");
    for(k=0;k<n-1;k++)
    {
        for(int j=0;j<n-1-k;j++)
        {
            int res = strcmp(str[j],str[j+1]);
            if(res>0)
            {
                strcpy(str1,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],str1);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",str[i]);

    }
    return 0;

}
