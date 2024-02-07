#include<iostream>
using namespace std;
int main()
{
    string name = "amitkasabe";
    int count = 0;
    for(int i = 0; i < name.length(); i++)
    {
        if(name[i] == 'a')
        {
            count++;
    }
}
    cout<<count;
}