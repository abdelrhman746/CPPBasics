#include <iostream>
using namespace std;

int MySumFunction(int Num1, int Num2)
{
    return Num1 + Num2 ;
}
int main()
{
    
    //cout << MySumFunction(10,20) << endl;

    //cout << MySumFunction(5, 7) << endl;
    
    //cout << MySumFunction(3, 4) << endl;
    
    //cout << MySumFunction(150, 20) << endl;

    int Number1, Number2;
    cout << "Please enter Number1!" << endl;
    cin >> Number1;

    cout << "Please enter Number2!" << endl;
    cin >> Number2;
    cout << "*************************************" << endl;

    cout << MySumFunction(Number1, Number2)<< endl;
}
