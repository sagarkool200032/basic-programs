#include <iostream>
using namespace std;

int main3()
{
    float ta,dis,namount;

    cout<<"Enter total amount: ";
    cin>>ta;

    if(ta<100)
    {
        dis = 0;
    }
    else if(ta>=100 and ta<500)
        dis = (ta*10)/100;

    else if(ta>=500)
        dis = (ta*20)/100;

    namount = ta-dis;

    cout<<"Bill Amount: "<<ta<<endl<<"Discount: "<<dis<<endl<<"Discounted Amount: "<<namount<<endl;



}
