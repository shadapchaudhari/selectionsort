#include<iostream>
using namespace std;
int main()
{
    string steps[] = {"Learn Computer Fundamentals" , "Learn Basic Mathematics" , "Learn Java fundamentals"};
    int size = sizeof(steps) / sizeof(steps[0]);
    for(int i = 0;i<size;i++)
    {
        cout<<i+1<<".";
        cout<<steps[i];
        cout<<endl;
    }
    return 0;
}