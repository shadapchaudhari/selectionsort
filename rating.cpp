#include <iostream>
using namespace std;

int main()
{

    double long rating;

    int u1;
    int u2;
    int u3;
    cin >> u1 >> u2 >> u3;
    int overallRating = u1 + u2 + u3;
    int maximumRating = 15;

    rating = static_cast<double>(overallRating) / maximumRating;
    rating = rating * 5;
    
    cout<<rating;
    return 0;
}