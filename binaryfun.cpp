#include <iostream>
using namespace std;
bool BinarySearch(int arr[], int target, int size)
{
    // 1 2 3 4 5 6
    int start = 0;
    int end = size;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return true;
        }
        else if (target > arr[mid])
        {
            // 6 > 4
            start=mid + 1;
        }
        else
        {
            end =mid - 1;
        }
    }
    return false;
}
int main()
{
    int ar[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(ar) / sizeof(ar[0]);
    bool output= BinarySearch(ar, 2, size);
    cout <<output<< endl;
    return 0;
}