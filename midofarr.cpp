#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0])-1;
    int target = 6;
    while (start < end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            cout<<mid;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else{
            end = end -1;
        }
    }
}