#include <iostream>
using namespace std;
int main()
{
    int Num1;
    int Num2;
    int Num3;
    cout << "please enter the First Number!" << endl;
    cin >> Num1;
    cout << "please enter the Second Number!" << endl;
    cin >> Num2;
    cout << "please enter the Third Number!" << endl;
    cin >> Num3;
    int Total = Num1 + Num2 + Num3;
    cout << endl << Num1 << "+" << endl;
    cout << Num2 << "+" << endl;
    cout << Num3 << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Total=" << Total << endl;
}
