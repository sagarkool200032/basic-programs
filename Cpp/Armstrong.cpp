#include <iostream>
using namespace std;
int  main24()
{
    int last,c=0,n,m;
    cout<<"Enter Number: ";
    cin>>n;
    m=n;

    while(n>0)
    {
        last=n%10;
        n = n/10;
        c=c+last*last*last;
    }
    if(c==m)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}
