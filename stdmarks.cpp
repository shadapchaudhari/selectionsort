#include <iostream>
using namespace std;
int main()
{
    // there's an array int student_marks[]={40 , 40 , 60 , 80 , 39 , 55 , 9 , 0}; create a new array named passed students and copy all students in that array

    // passing marks = 40
    int student_marks[] = {40, 40, 60, 80, 39, 55, 9,100};
    int s1 = sizeof(student_marks) / sizeof(student_marks[0]);
    int s2 = 0;
    // int passed_students[];
    for (int i = 0; i < s1; i++)
    {
        if (student_marks[i] >= 40)
        {
            s2++;
        }
    }
    // cout<<s2<<endl;
    int passed_students[s2];
    for (int i = 0; i < s1; i++)
    {
        if (student_marks[i] >= 40)
        {
            passed_students[i] = student_marks[i];
        }
    }
    for (int i = 0; i < s2; i++)
    {
        cout << passed_students[i];
        cout << endl;
    }
}