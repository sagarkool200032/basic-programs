#include <iostream>
#include <cmath>
using namespace std;

int main8()
{
    double a,b,c,d,x1,x2;

    cout<<"Enter a,b,c: ";
    cin>>a>>b>>c;

    d = (b*b)-(4*a*c);

    x1 = ((-b)-sqrt(d))/(2*a);

    x2 = ((-b)+sqrt(d))/(2*a);

    if(d==0)
    {
     cout<<"Roots are real and equal: "<<x1<<", "<<x2<<endl;
    }
    else
    {
        if(d>0)
            cout<<"Roots are real and not equal: "<<x1<<", "<<x2<<endl;
        else
            cout<<"Roots are not real: "<<endl;
    }

    return 0;


}
