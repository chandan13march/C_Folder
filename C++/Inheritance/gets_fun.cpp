#include <iostream>
#include <cstdio>
#include<string>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "You entered: " << str;

    return 0;
}