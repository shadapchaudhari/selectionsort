#include<iostream>
using namespace std;
int main()
{
    int n = 4999, rev = 0, remainder;
    while(n!=0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    cout << rev <<endl;
    return 0;
}