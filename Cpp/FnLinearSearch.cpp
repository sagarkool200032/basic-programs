#include <iostream>
using namespace std;

int Lsearch(int A[],int n,int key)
{

    for(int i=0;i<n;i++)
    {
        int e;
        e=A[i];
        if(e==key)
        {
            cout<<"Index Of Element: "<<i<<endl;
            return 0;
        }
    }
    cout<<"Unsuccessful";
    return 0;
}

int main6()
{
    int key=0,A[]={1,2,3,4,5,11,12,13,14,15};

    cout<<"Enter Key: "<<endl;
    cin>>key;
    Lsearch(A,10,key);
    return 0;
}
