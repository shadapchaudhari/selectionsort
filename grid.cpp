// there's an array string student[]={40, 40, 60, 80, 39, 55, 9, 0}; create a new named passed student and copy all students in that array
// passing marks = 40 students

#include <iostream>
using namespace std;
int main()
{
    int student[] = {40, 40, 60, 80, 39, 55, 9, 0};
    int size = sizeof(student) / sizeof(student[0]);
    int arr1[size];
    for (int i = 0; i < size; i++)
    {
      arr1[i] = student[i];
      cout<<student[i]<<endl;
    }
    
    for(int i = 0; i < size; i++)
    {
        cout<<student[i]<<endl;
    }
    return 0;
}