#include<iostream>
using namespace std;
int main()
{
    int a [] = { 0, 1, 2, -1, -1, 0, 1};
    int b [] = {-1, -2, -2, -2, -3, 1, -3};
    int size = sizeof(a) / sizeof(b[0]);
    
    for (int i = 0; i < size; i++)
    {
        if(a[i]<0)
        {
            cout << i << endl;
            break;
        }
    }
    for(int i = 0; i < size; i++)
    {
        if (b[i]>0)
        {
            cout << i <<endl;
            break;
        }
    }
    return 0;
    
}