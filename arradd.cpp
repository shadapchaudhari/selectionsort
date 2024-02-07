#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 16, 7, 20, 18, 23, 9};
    // 9
    int target = 28;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << " + " << arr[j] << " = " << target << endl;
                break;
            } 
        }
    }
}