#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    map<string, int> mp;
    mp.insert({"vinay", 70});
    mp.insert({"shubham", 70});
    mp.insert({"Amit", 70});
 /*
 mp = {
    {vinay : 70, shubham :70,amit :70}
 }
 
 */
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    return 0;
}