#include <iostream>
using namespace std;
float areaOfCircle(int radius)
{
    // Pie * r * r
    float area = 3.14 * radius * radius;
    return area;
}
float strikeRate(int balls, int runs)
{
    float sr =static_cast<float>(runs) / balls * 100;
    return sr;
}

int main()
{
    int RunsScored[] ={35, 16, 10, 104, 17, 0, 28};
    int ballsPlayed[] = {18, 12, 6, 48, 21, 1, 16};
    for (int i = 0; i < 7; i++)
    {
        cout<<strikeRate(ballsPlayed[i] ,RunsScored[i]);
        cout << endl;
    }
}