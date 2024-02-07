#include<iostream>
using namespace std;
int main()
{
    int arr [] = {1,1,1,0,0,0,1,1,1,1,1,0,0,0,1,1};
    int count = 0;
    int cmax = 0;
    int mathmax;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++)
    {
        if(arr[i]==1)
        {
            count++;
            cmax = max (count,cmax);
        }
        else
        {
            count = 0;
        }
    }
    cout<<cmax<<endl;
    return count;
}