#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    //string length
    char s1[] = {"234"};
    char s2[] = {"54.78"};
    char s3[] = {"x=5;y=10;z=35"};

    long int x = strtol(s1,NULL,10); //string to long int
    float y = strtof(s2,NULL); //string to float
    cout << x<<endl<< y << endl;

    // string tokenizer

    char *token = strtok(s3,"=;");
    while (token != NULL)
    {
        cout << token<<endl;
        token = strtok(NULL,"=;");
    }
    return 0;
}