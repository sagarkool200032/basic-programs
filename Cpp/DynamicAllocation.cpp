#include <iostream>
using namespace std;
int main36()
{

    int *p=new int[20];

    delete []p;

    p=new int[40];

    cout<<p<<endl;
    delete []p;

    return 0;
}
