#include <iostream>
using namespace std;
int main()
{
    string name ,courseName;
    long long phoneNumber;
    cout << " What is your name?" << endl;
    cin >> name;
    cout << " What is your Phone Number?" << endl;
    cin >> phoneNumber;
    cout << " What course you want to buy?" << endl;
    cin >> courseName;
    string courses[] = {"full-stack", "full stack java", "data science"};
    cout<<courseName;
    cout<<endl;
    int size = sizeof(courses) / sizeof(courses[0]);
    for (int i =0; i < size;i++)
    {
        if (courses[i] == courseName)
        
        {
            break;
        }
        else
        {
            courseName="Not available";
        }
    }
    cout << name << endl;
    cout << phoneNumber << endl;
    cout << courseName << endl;
}