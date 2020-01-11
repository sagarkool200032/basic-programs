#include <iostream>
using namespace std;
int main23()
{
    int counter=0,n,i;
    cout<<"Enter to Check Number: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            counter+=1;
    }
    if(counter==2)
        cout<<n<<" "<<"is prime number";
    else
        cout<<n<<" "<<"is not prime number";
    return 0;
}
