#include<iostream>
using namespace std;

int main13()
{
    int tn,i,x;

    cout<<"Display Table of: ";
    cin>>tn;

    for(i=1;i<=10;i++)
    {
        x = tn*i;

        cout<<tn<<" x "<<i<<" = "<<x<<endl;
    }

    return 0;
}
