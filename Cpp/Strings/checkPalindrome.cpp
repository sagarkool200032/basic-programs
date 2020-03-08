#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s1[20],s2[20];
    int j=0;
    cout<<"Enter String 1: ";
    cin.getline(s1,20);
    for(int i=(strlen(s1)-1);i>=0;i--)
    {
         s2[j]=s1[i];
         j++;
    }
    cout<<s2<<endl;
    for(int i = 0; i < strlen(s1);i++)
        {
            if(s1[i] == s2[i])
                continue;
            else
            {
                cout << "Not Palindrome";
                return -1;
            }   
        }
        cout << "Palindrome";
        return 0; 
}