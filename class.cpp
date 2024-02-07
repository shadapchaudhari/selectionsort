#include <iostream>
using namespace std;
class car
{
public:
    string name;
    string color;
    string prize;
    string varient;
    void printcar()
    {
        cout << name << " " << color << " " << prize << " " << varient << endl;
    }
};
int main()
{
    car vinay;
    vinay.name = "verna";
    vinay.color = "black";
    vinay.prize = "18lakh";
    vinay.varient = "diesel";
    vinay.printcar();

    car parth;
    parth.name = "marcedes";
    parth.color = "maroom";
    parth.prize = "1cr";
    parth.varient = "petrol";
    parth.printcar();

    car subham;
    subham.name = "rangerover";
    subham.color = "white";
    subham.prize = "2cr";
    subham.varient = "petrol";
    subham.printcar();
    return 0;
}
