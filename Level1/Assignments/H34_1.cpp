#include <iostream>
using namespace std;

void MySumProcedure()
{
    int Num1, Num2;
    cout << "Please enter Number1!" << endl;
    cin >> Num1;

    cout << "Please enter Number2!" << endl;
    cin >> Num2;

    cout << "*************************************" << endl;
    
    cout << Num1 + Num2 << endl;
}

int MySumFunction()
{
    int Num1, Num2;
    cout << "Please enter Number1!" << endl;
    cin >> Num1;

    cout << "Please enter Number2!" << endl;
    cin >> Num2;

    cout << "*************************************" << endl;

    return Num1 + Num2;
}


int main()
{
    MySumProcedure();
   
    cout << (MySumFunction()+10)/20 << endl;
    
}
