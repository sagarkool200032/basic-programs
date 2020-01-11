#include <iostream>
using namespace std;
int main21()
{
    int n,i,f=1;

    cout<<"Factorial of Number: ";
    cin>>n;

    for(i=n;i>0;i--)
    {
        f = f*i;
        cout<<f<<endl;

    }
    cout<<endl;
    cout<<n<<"!"<<" = "<<f;


}
