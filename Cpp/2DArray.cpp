#include <iostream>
using namespace std;

int main31()
{
    int c,r;
    cout<<"Enter No. Of Columns: ";
    cin>>c;
    cout<<"Enter No. Of Rows: ";
    cin>>r;

    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<"("<<i<<","<<j<<")"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
