#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    int student_marks[] = {40, 40, 60, 80, 39, 55, 9, 0};
    int s1 = sizeof(student_marks) / sizeof(student_marks[0]);
    int size = sizeof(student_marks) / sizeof(student_marks[0]);
    vector<int> passed_stud;
    for (int i = 0; i < size; i++)
    {

        if (student_marks[i] < 40)
        {
            passed_stud.push_back(student_marks[i]);
        }
    }
    for (auto i : passed_stud)
    {
        cout << i << endl;
    }
}