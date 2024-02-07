#include <iostream>
using namespace std;

int main()
{
    int num, originalNum, remainder, result = 0;
    num = 153;
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;

        result += remainder * remainder * remainder;
        // result = 27 + 125
        originalNum /= 10;
        // 15
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}