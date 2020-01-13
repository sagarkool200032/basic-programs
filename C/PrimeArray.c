#include <stdio.h>
#include <stdlib.h>
int main9()
{
    int P[200],index=0;
    for(int i=1;i<=200;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {

            if(i%j==0)
                count+=1;
        }

        if(count==2)
            {
                  P[index]=i;
                    index++;
            }
    }
    for(int x=0;x<index;x++)
    {
        printf("               %5d\n",P[x]);
    }
    return 0;
}
