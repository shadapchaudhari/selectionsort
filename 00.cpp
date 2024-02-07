#include <iostream>
using namespace std;
int main()
{
    int ar[] = {8,0,7,6,0,0,1,2};
    int size = sizeof(ar)/sizeof(ar[0]);
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(ar[i]==0)
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }

    }
    for(int i = 0; i < size; i++)
    {
        cout << ar[i] << endl;
    }
    return 0;
}