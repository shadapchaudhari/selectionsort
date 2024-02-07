#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> mp;
    mp.insert({0, "binay"});
    mp.insert({1, "parth"});
    mp.insert({2, "subham"});
    mp.insert({3, "amitsir"});
    mp.insert({4, "codeseed"});
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    return 0;
}