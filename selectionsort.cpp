#include <iostream>
#include <vector>
using namespace std;
vector<int> selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int smallest = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[smallest] > arr[j])
            {
                smallest = j;
            }
        }
        swap(arr[smallest], arr[i]);
    }

    return arr;
}
int main()
{
    vector<int> v = {7, 8, 3, 1, 2, 9};
    vector<int> output = selectionSort(v);
    for (auto i : output)
    {
        cout << i << " " << endl;
    }
     return 0;
}