#include <iostream>
using namespace std;

int main9()
{
    float a,b,c,net;

    cout<<"Enter Basic Salary: ";
    cin>>a;

    cout<<"Enter Percent of Allowances: ";
    cin>>b;

    cout<<"Enter Percent of Deductions: ";
    cin>>c;

    net = a + (a*(b/100)) - (a*(c/100)) ;

    cout<<"NetSalary: "<<net<<endl;

    return 0;
}
