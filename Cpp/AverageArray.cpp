#include <iostream>
using namespace std;
int main33()
{
    int sum=0,average,n;
    cout<<"Enter No. of elements: ";
    cin>>n;
    int A[n];

    for(int i=0;i<n;i++)
    {
        int e;
        cout<<"Enter Element: ";
        cin>>e;
        A[i]=e;
        sum = sum+A[i];
    }
    average = sum/n;

    cout<<sum<<"   "<<average<<endl;

}
