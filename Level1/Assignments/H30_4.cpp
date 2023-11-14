#include <iostream>
#include <string>
using namespace std;
//Convert double N3 = 55.23 to string.
int main()
{
    double N3 = 55.23;
    string St3 = to_string(N3);
    int Num1, Num2, Num3;
    Num1 = N3;
    Num2 = (int)N3;
    Num3 = int(N3);

    cout << "St3 = " << St3 << endl;

    cout << "Num1 = " << Num1 << endl;
    cout << "Num2 = " << Num2 << endl;
    cout << "Num3 = " << Num3 << endl;
}
