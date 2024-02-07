#include<iostream>

using namespace std;

int main()
{
    string s = "you are an awesome person";
    cout << s.substr(0,3);
    cout << s.substr(8,2);
    cout << s.substr(22,3);
    cout << s.substr(14,4);
    return 0;
}