#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = {"Hello"};
    string s2 = {"Prog"};
    string s3 = {"Pro Player"};
    string s4 = {"Programming"};
    string s5 = {"Competitive Programming"};
    // string appends
    s1.append(" world");
    cout<<s1<<endl;

    // string insert
    s2.insert(4,"ramming");
    cout<<s2<<endl;

    s3.insert(3," Csgo valve Player",6);
    cout << s3 << endl;

    // replace substring
    // str.replace(index,no. of chars,new substring)
    s4.replace(3,4,"kk");
    cout<<s4<<endl;

    // str.erase() will clean/erase the string

    // string push appends a char at end
    s5.push_back('!');
    cout<<s5<<endl;

    // string pop removes the last char of the string
    s5.pop_back();
    cout << s5 << endl;

    // swaps two strings
    s1.swap(s3);
    cout<<s1<<endl<<s3<<endl;

    return 0;

}