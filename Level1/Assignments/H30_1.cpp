#include <iostream>
#include <string>
using namespace std;
//Convert string st1="43.22" to double, float, and int.
int main()
{
    string st1 = "43.22";
    double Num1 = stod(st1);
    float Num2 = stof(st1);
    int Num3 = stoi(st1);
    cout << "Num1 = " << Num1 << endl;
    cout << "Num2 = " << Num2 << endl;
    cout << "Num3 = " << Num3 << endl;
}

