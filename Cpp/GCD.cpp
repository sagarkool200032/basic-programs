#include <iostream>
using namespace std;
int main()
{
    int n1,n2,i,m,c=0;
    cout<<"Enter N1 and N2: ";
    cin>>n1>>n2;

    if(n1>n2)
    m=n1;
    else
    m=n2;
    for(i=m;i>=2;i--)
    {
        if(n1%i==0 and n2%i==0)
        {
            cout<<i<<endl;
            c+=1;
            break;
        }
    }
    if(c==0)
        cout<<"Prime Number"<<endl;
    return 0;
}
