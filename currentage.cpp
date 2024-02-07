#include<iostream>
using namespace std;
int main()
{
    
    /*
    
    take birth year from user and print current age of user 

    */
//    2023 - 2000 
    int birthYear;
    cin>>birthYear;
    int age=0;
    for(int i=birthYear;i<2023;i++)
    {
        age++;
        // age = age+1;
        // i++ = i = i +1
    }
    cout<<age;

    return 0;
}