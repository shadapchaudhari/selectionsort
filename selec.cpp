#include <iostream>
using namespace std;
int main()
{
    int arr[] = {7, 8, 3, 1, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < size; j++)

        {
            if (arr[smallest] > arr[j])
            {
                smallest = j;
            }
        }
        swap(arr[smallest], arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}