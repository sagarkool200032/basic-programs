#include <iostream>
using namespace std;
int main34(){
int A[10],n=10,key;
cout<<"Enter Numbers: "<<endl;
for(int i=0;i<n;i++)
{
    int e;
    cin>>e;
    A[i]=e;
    e = 0;
}
cout<<endl;
for(int i=0;i<n;i++)
{
    int e;
    e = A[i];
    cout<<"A"<<i<<"="<<e<<" ";
}
cout<<endl;
cout<<endl;
cout<<"Enter Key: ";
cin>>key;

for(int i=0;i<n;i++)
{
    int e;
    e = A[i];
    if(key==e)
    {
        cout<<"Position: "<<i<<endl;
        return 0;
    }
}
cout<<endl;
cout<<"Unsuccessful"<<endl;
}
