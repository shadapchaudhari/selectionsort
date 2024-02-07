#include <iostream>
using namespace std;
float areaOfCircle(int radius)
{
    // Pie * r * r 
    float area = 3.14 * radius * radius;
    return area;
}
// write a function to calculate batter overall strikerate in a single season 
/*

the strike rate get's calculated by dividing number of balls batsman has faced by runs scored by batter

batter has faced overall 200 balls in a season and scored 400 runs so stikerate would be calculated as (400/200)*100

suppose virat kohli has socre 400 runs in 400 balls can you calculate his strike rate.

(runs / balls) * 100 

*/
int main()
{
    float op = areaOfCircle(2);
    cout<<op;
     return 0;
}