#include <iostream>
using namespace std;
void increase(int &z)
{
    z++;
}
int main()
{
    int z = 10;
    cout<<z;
    cout<<"change z's value";
    increase(z);
    cout<<z;

    return 0;
}