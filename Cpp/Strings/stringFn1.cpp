#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    //string length
    char str[50]={"hello world"};
    cout<<strlen(str)<<endl;  

    // string concat
    char s1[]="Good",s2[]="Morning";
    strcat(s1,s2);
    cout<<s1<<endl;

    // string copy
    char s3[] = "Good", s4[10];
    strcpy(s4,s3);
    cout<<s4;

    return 0;
}