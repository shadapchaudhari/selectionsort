#include <iostream>
using namespace std;
int main()
{
  int arr[] = {18, 25, 45, 3, 8, 1};
    //    int arr1;
    int size = sizeof(arr) / sizeof(arr[0]);
    int arr1[size];
    for (int i = 0; i < size; i++)
    {
        arr1[i] = arr[i];
        cout << arr1[i] << endl;
    }

    for(int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
   return 0;
}