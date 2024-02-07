#include <iostream>
using namespace std;
int main()
{
    int ar[] = {6, 5, 4, -1, 19, 11, 3};
    int size = sizeof(ar) / sizeof(ar[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << endl;
    }
    return 0;
}