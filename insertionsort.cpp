#include <iostream>
using namespace std;
insertionsort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i;
        while (j > 0 && a[j] < a[j - 1])
        {
            int swap = a[j];
            a[j] = a[j - 1];
            a[j - 1] = swap;
            j--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
}
int main()
{

    int a[] = {8, 5, 9, 3, 4, 2, 0};
    int size = sizeof(a) / sizeof(a[0]);
    insertionsort(a, size);
}