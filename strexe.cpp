#include <iostream>

using namespace std;

int main()
{
    string s = "you are awesome bro";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s[i] = '-';
        }
    }
    cout << s;
    return 0;
}