#include <iostream>
using namespace std;
int main35()
{
    int i,j,m,n;

    cout<<"Enter rows and columns for Matrix A: ";
    cin>>i>>j;
    int A[i][j];
    cout<<endl;
    cout<<"Enter rows and columns for Matrix B: ";
    cin>>m>>n;
    int B[m][n];
    int C[i][n];

    for(int x=1;x<=i;x++)
    {
        for(int y=1;y<=j;y++)
        {
            int e;
            cout<<"Enter Elements for A"<<x<<y<<": ";
            cin>>e;
            A[x][y]=e;

        }
    }

    for(int x=1;x<=m;x++)
    {
        for(int y=1;y<=n;y++)
        {
            int e;
            cout<<"Enter Elements for B"<<x<<y<<": ";
            cin>>e;
            B[x][y]=e;

        }
    }
    for(int x=1;x<=i;x++)
    {

        for(int y=1;y<=n;y++)
        {

           C[x][y]=0;

           for(int y=1;y<=n;y++)
        {

           C[x][y]+=A[x][y]*B[x][y];

        }

        }

    }

    for(int x=1;x<=i;x++)
    {
        for(int y=0;y<n;y++)
        {
            int e;
            e=C[x][y];
            cout<<e<<" ";

        }
        cout<<endl;
    }



}
