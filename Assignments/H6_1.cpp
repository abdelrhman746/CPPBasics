#include <iostream>
using namespace std;
int main()
{
    string Name ;
    short Age ;
    string City ;
    string Country ;
    float Monthly_Salary ;
    char Gender ;
    bool Married ;
    
    cout << "please enter your name!" << endl;
    cin >> Name;

    cout << "please enter your Age!" << endl;
    cin >> Age;
    
    cout << "please enter your City!" << endl;
    cin >> City;
    
    cout << "please enter your Country!" << endl;
    cin >> Country;
    
    cout << "please enter your Monthly Salary!" << endl;
    cin >> Monthly_Salary;
    
    cout << "please enter your Gender!" << endl;
    cin >> Gender;
    
    cout << "Are you Married? 1/0" << endl;
    cin >> Married;
    
    float Yearly_Salary = Monthly_Salary * 12;
    
    cout << "***********************************************" << endl;
    cout << "Name :" << Name << endl;
    cout << "Age :" << Age << endl;
    cout << "City :" << City << endl;
    cout << "Country :" << Country << endl;
    cout << "Monthly Salary :" << Monthly_Salary << endl;
    cout << "Yearly Salary :" << Yearly_Salary << endl;
    cout << "Gender :" << Gender << endl;
    cout << "Married :" << Married << endl;
    cout << "***********************************************" << endl;
}

