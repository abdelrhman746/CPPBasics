#include <iostream>
using namespace std;

int main()
{

    short A , B;
    cout << "Please enter the First Number A !" << endl;
    cin >> A;
    cout << "Please enter the second Number B !" << endl;
    cin >> B;

    cout << A << " = " << B << " \t " << (A == B) << endl;
    cout << A << " != "<< B << " \t " << (A != B) << endl;
    cout << A << " > " << B << " \t " << (A > B) << endl;
    cout << A << " < " << B << " \t " << (A < B) << endl;
    cout << A << " >= " << B << " \t " << (A >= B) << endl;
    cout << A << " =< " << B << " \t " << (A <= B) << endl;
}
