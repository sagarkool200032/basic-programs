#include <iostream>
using namespace std;
int main22()
{
    int n,i;
    cout<<"Factors of Number: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            cout<<i<<endl;
    }

    return 0;
}
