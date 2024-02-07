#include<iostream>
using namespace std;
void say(int n)
{
    cout << "codeseed\n";
    if (n == 5)
    {
        return;
    }
    say(n+1);
}

int main()
{
    say(1);
    return 0;
}