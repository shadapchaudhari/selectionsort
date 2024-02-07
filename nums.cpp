#include <iostream>
using namespace std;
/*int printNums(int n)
{
    if (n == 10)
        return 10;
    return printNums(n + 1);
}*/
int SumOfNaturalNumbers(int n)
{
    if (n == 0)
        return 0;
    int sum = 0;
    sum += n;
    cout<<SumOfNaturalNumbers(n-1);
    cout<<endl;
    cout<<sum+SumOfNaturalNumbers(n-1);
    return sum + SumOfNaturalNumbers(n - 1);

}
int fact(int n)
{
    if(n == 0) return 1;
    n = n * fact(n - 1);
    return n;
}
int main()
{
    SumOfNaturalNumbers(5);
    int n = 1;
    cout<<fact(5);
    return 0;
}