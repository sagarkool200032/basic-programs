#include <stdio.h>

int sumOfArray(int *arr,int n)
{
    int sum=0,* larray=arr+n;
    while(arr<larray)
    {
        sum+=*arr;
        arr++;
    }
    return sum;
}
int main22()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,11},ans;
    ans=sumOfArray(arr,10);
    printf("sum of array: %d",ans);

    return 0;
}
