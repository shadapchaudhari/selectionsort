#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c = 50;
    if (a >= b && a <= c)
    {
        cout << a;
    }
    else if (b >= c && b <= a)
    {
        cout << b << " "
             << "is greater" << endl;
    }

    else
    {
        cout << c << " "
             << "is greater" << endl;
    }
    return 0;
}
