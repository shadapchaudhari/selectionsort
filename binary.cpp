#include <iostream>
using namespace std;
int main()
{
    int arr[] = {8, 11, 62, 102, 109, 110, 112, 136, 768};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int mid;
    int end = size;
    int t = 102 ;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (t == arr[mid])
        {
            cout << mid;
            return 0;
        }

        else if (t > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}
