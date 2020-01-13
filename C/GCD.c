#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gdc(int n1, int n2)
{
    int n;
    if(n1>n2)
        n=n1;
    else
        n=n2;
    for(int i=n;i>=1;i--)
    {
        if(n1%i==0 && n2%i==0)
            return i;
    }
    return 0;
}

void ab(float n3)
{
    n3=abs(n3);
    printf("Absolute value: %.2f \n",n3);
}

int sq(int n4)
{
    n4=sqrt(n4);
    return n4;
}
int main10()
{
    int n1,n2,n4;
    float n3;
    //GDC
    printf("Enter 2 Numbers to find GDC: ");
    scanf("%d%d",&n1,&n2);
    int ans=gdc(n1,n2);
    printf("GDC: %d\n",ans);
    //Abs
    printf("Enter a Number to find Absolute Value: ");
    scanf("%f",&n3);
    ab(n3);
     //Sq root
    printf("Enter Number To Find Sq Root:");
    scanf("%d",&n4);
    printf("Square Root: %d",sq(n4));
    return 0;
}
