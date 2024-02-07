#include <bits/stdc++.h>
using namespace std;
class Father
{
public:
    void skinColor()
    {
        cout << " Brown ";
    }
};
class Mother
{
public:
    void eyeColor()
    {
        cout << " Light Green ";
    }
};
class Child : public Father, public Mother
{
    //
};
int main()
{
    Child ramesh;
    ramesh.eyeColor();
    ramesh.skinColor();
    return 0;
}