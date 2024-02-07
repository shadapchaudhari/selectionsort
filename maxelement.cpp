#include <iostream>
using namespace std;

int main()
{

    // int arr[] = {1,33,-1,2,66,-9,0,11};
    // max = 1
    // max = 33
    int arr[] = {1, 33, -1, 2, 668, -9, 0, 11 , 333};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxElement = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    cout<<maxElement<<endl;
    return 0;
}