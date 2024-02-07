#include <bits/stdc++.h>
using namespace std;
class A{
    public: 
    void parts()
    {
        cout << "compreser";
        cout << endl;
        cout << "excel";
    }
};
class B : public A{

};
class C : public B{

};
int main()
{
    C car;
    car.parts();
    return 0;
}
     


