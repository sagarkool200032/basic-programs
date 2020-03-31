#include <stdio.h>
// time : O(n)
int fib(int n)
{
    int t0=0,t1=1,sum;
    if(n<=1)
        return n;

    for(int i=2;i<=n;i++)
    {
        sum = t0+t1;
        t0 = t1;
        t1 = sum;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter nth term: ");
    scanf("%d",&n);
    printf("value of %dth term : %d \n",n,fib(n));
    return 0;
}
