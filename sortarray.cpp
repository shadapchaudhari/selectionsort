#include <iostream>
using namespace std;
int main()
{
    int x[] = {3, 2, 1, 0};
    int temp;
    int size = sizeof(x) / sizeof(x[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (x[i] > x[j])
            {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for (int j = 0; j < size; j++)
    {
        cout << x[j] << " " << endl;
    }
}