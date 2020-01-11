#include <iostream>
using namespace std;

int main28()
{
    int A[7] = {4,8,6,9,5,2,8};
    int n=7,i,sum=0,e;

    for(i=0;i<n;i++)
    {
        e = A[i];
        sum = sum + e;
    }
    cout<<sum<<endl;
    return 0;
}
