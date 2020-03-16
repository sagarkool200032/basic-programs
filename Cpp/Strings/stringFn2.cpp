#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    //string substring
    char s1[] = {"Programming"};
    char s2[]= {"gram"};
    char s3[] = {"Parents"};
    char s4[] = {"Child"};

    if(strstr(s1,s2)!=NULL)
        cout<<strstr(s1,s2)<<endl;
    else
        cout<<"Not Found"<<endl;
    // string char
    cout<<strchr(s1,'i')<<endl;

    cout << strrchr(s1, 'r')<<endl; //check occurence from right

    //strcmp
    cout<<strcmp(s3,s4)<<endl; //returns 0--> both equal, -ve-->s1 is smaller , +ve-->s1 is larger
    
    return 0;
}