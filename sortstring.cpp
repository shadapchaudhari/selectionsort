#include <iostream>
using namespace std;
string sortstring(string str)
{
    string newstr;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] > str[j])
            {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
        newstr += str[i];
    }
    return newstr;
}
int main()
{
    string str = "dbac";
    cout << sortstring(str);
    return 0;
}