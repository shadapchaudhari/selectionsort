#include <iostream>
#include <set>
using namespace std;

set<string> removeDuplicates(string arr[], int size)
{
    set<string> s;
    for (int i = 0; i < size; i++)
    {
        s.insert(arr[i]);
    }

    return s;
}
int main()
{
    string arr[] = {"amit", "amit", "vinay", "ruchika", "payal", "parth", "shruti", "vinay", "amol", "vishal", "shraddha", "shraddha", "shubham", "shadap", "prajakta", "amit"};

    int strSize;
    cin>>strSize;
    string str[strSize];
    for(int i = 0 ;i<strSize;i++)
    {
        cin>>str[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    set<string> result = removeDuplicates(str, strSize);
    for (auto itr : result)
    {
        cout << itr << " ";
    }
    return 0;
}