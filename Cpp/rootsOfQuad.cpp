#include <iostream>
#include <cmath>
using namespace std;

int main10()
{
    double a,b,c,x1,x2;

    cout<<"Enter variables a,b,c: ";

    cin>>a>>b>>c;



    x1 = (-b+sqrt(b*b-4*a*c))/(2*a);

    x2 = (-b-sqrt(b*b-4*a*c))/(2*a);

    cout<<"Roots are "<<x1<<"and"<<x2<<endl;
}
