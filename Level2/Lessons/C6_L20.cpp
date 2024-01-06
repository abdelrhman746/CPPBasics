#include <iostream>
#include <cmath>
using namespace std;

// Static Variable
void MyFunction()
{
    static int Number = 1;
    cout << "Value of Number: " << Number << "\n";
    Number++;
}
int main()
{

    MyFunction();
    MyFunction();
    MyFunction();
    return 0;
}
