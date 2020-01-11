#include <iostream>
using namespace std;

int main120()
{
    int n,sum=0,i;

    cout<<"Sum till Number: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum = sum + i;
        cout<<sum<<endl;
    }

    return 0;
}
