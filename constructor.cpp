#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a;
    int b;
    A()
    {
        cout << a + b;
    }
};
class B
{
public:
    B()
    {
        cout << "hello";
    }
};
int main()
{
    A obj; // constructor called 
    obj.a = 10;
    obj.b = 20;
    B obj1;
    return 0;
}    