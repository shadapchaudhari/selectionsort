#include <bits/stdc++.h>
using namespace std;
class GrandFather {
    public:
    void Quality()
    {
        cout<<" Physics is strong ";
    }
};
class Father : public GrandFather {

};
class Child : public Father {

};
int main()
{
    Child ram;
    ram.Quality();
    return 0;
}