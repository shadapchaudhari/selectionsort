#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *x = &a;
    (*x)++;
    cout << a;

}