#include <iostream>
using namespace std;

void ReadArrayData(int x[3])
{
    cout << "Please enter Grade1!" << endl;
    cin >> x[0];

    cout << "Please enter Grade2!" << endl;
    cin >> x[1];

    cout << "Please enter Grade3!" << endl;
    cin >> x[2];
}

void PrintArrayData(int x[3])
{
    cout << "**************************************************************" << endl;
    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;
}
int main()
{
    int x[3];
    ReadArrayData(x);
    PrintArrayData(x);
}


