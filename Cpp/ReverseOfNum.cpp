#include <iostream>
using namespace std;
int main26()
{
    int n,rev=0,last;

    cout<<"Enter Number: ";
    cin>>n;

    while(n>0)
    {
        last = n%10;
        n = n/10;
        rev = rev*10+last;
    }
    cout<<rev<<endl;


}
