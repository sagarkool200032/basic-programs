#include <iostream>
using namespace std;
int main25()
{
    int n,last;
    cout<<"Enter Number: ";
    cin>>n;
    for(;n>0;)
    {
        last = n%10;
        cout<<last;
        n = n/10;
    }
    return 0;
}
