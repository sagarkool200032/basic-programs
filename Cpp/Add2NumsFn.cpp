#include <iostream>
using namespace std;
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main37()
{
    int n1,n2,r;
    cout<<"Enter 2 Numbers: ";
    cin>>n1>>n2;
    r=add(n1,n2);
    cout<<"Sum: "<<r<<endl;
}
