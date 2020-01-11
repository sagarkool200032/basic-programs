#include <iostream>
using namespace std;

int main30()
{
    int key,l=0,h=9,mid,A[10] = {1,2,3,4,5,6,7,18,19,20};

    cout<<"Enter Key: ";
    cin>>key;

    while(l<=h)
    {
        mid = (l+h)/2;

        if(key==A[mid]){
            cout<<"Position: "<<mid<<endl;
            return 0;}

        else if(key<A[mid])
            h = mid - 1;
        else if(key>A[mid])
            l = mid + 1;
    }
    cout<<"Not successful";
    return 0;

}

