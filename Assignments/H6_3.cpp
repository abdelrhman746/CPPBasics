#include <iostream>
using namespace std;
int main()
{
    short Age;
    short Passed_years = 5;
    cout << "please enter your Age!" << endl;
    cin >> Age;
    cout << "After " << Passed_years << " years you will be " << Age + Passed_years << " years old" << endl;
}
