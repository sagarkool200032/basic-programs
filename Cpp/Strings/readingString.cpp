#include <iostream>
using namespace std;
int main()
{
    char name[20],age[3];
    cout<<"Enter Your Name: ";
    cin.get(name,20);
    // cin.getline(name,20);  gets entire string with /n
    cin.ignore();
    cout<<"Enter your age: ";
    cin.get(age,3);
    cout<<name<<" "<<age<<endl;
    return 0;
}