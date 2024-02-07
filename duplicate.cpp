#include <iostream>
using namespace std;

bool isSored(int ar[] , int n)
{
    // int a[] = {0,0,0,1};
    bool sor = true;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] > ar[i+1])
        {
            sor = false;
        }
    }

    return sor;
}

bool duplicates(int a[] , int n)
{
    bool duplicate = false;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                duplicate = true;
            }
        }
    }
    return duplicate;
}

int main()
{
    int a[] = {1,2,3};
    int n = sizeof(a) / sizeof(a[0]);
    // 1 ,3 ,2,5,
    // 1 ,2 ,3 , 4 , 5 
    bool result = duplicates(a, n);
    cout<<result<<endl;
    return 0;

}