include <iostream>
using namespace std;
/* given a function you've to return first string which is palindrom in array of string

string s[] = {"abc" , "abab" , "bab" , "abcba" , "bab"}
s2 = {"aba" , "abcda" , "aca"}
s3 = {"ad" , "abd" , "abcd"}
*/
bool isThisPalindrome(string str)
{
    // abc

    bool isPalindrom = true;
    int start = 0;
    int end = str.length() - 1;
    
    while (start < end)
    {
       
        if (str[start] != str[end])
        {
            isPalindrom = false;
            break;
        }
        start++;
        end--;
    }
  
    
        return isPalindrom;
    }
// int firstPlindrom(string str[], int size)
// {
//     // {"abc", "abab", "bab", "abcba", "bab"}

//     for (int i = 0; i < size; i++)
//     {
//         if (isThisPalindrome(str[i]) == true)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
int main()
{
    string s[] = {"abc", "ababs", "nayan", "abcba", "bab"};
    string s2[] = {"nayanw", "nitinw", "aba"};
    int size = sizeof(s) / sizeof(s[0]);
    // int n;
    // int arr[n];
    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }
    cout<<isThisPalindrome("nayan");
    // cout << firstPlindrom(s2, size);
}