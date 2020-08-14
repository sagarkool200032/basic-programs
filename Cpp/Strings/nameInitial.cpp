#include <iostream>
#include <string>
using namespace std;

int main()

{
    string name;
    getline(cin, name);
    int last = name.find_last_of(' ');
    cout << name[0] << ".";
    for (int i = 1; i < last; i++)
    {
        if (name[i] == ' ')
            cout << name[i + 1] << ".";
    }
    for (int i = (last + 1); name[i] != '\0'; i++)
    {
        cout << name[i];
    }
    return 0;
}