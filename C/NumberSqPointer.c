#include <stdio.h>
#include <math.h>
int sqq(int * pqrn)
{
    *pqrn=(int)(pow(*pqrn,2.0)+0.5);
    return 0;
}
int main24()
{
    int n;

    printf("Enter number to see its square: ");
    scanf("%d",&n);
    printf("\n%d\n\n",n);
    sqq(&n);
    printf("%d\n\n",n);
    return 0;
}
