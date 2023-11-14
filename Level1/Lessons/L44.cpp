#include <iostream>
using namespace std;

enum enScreenColor{Red=1,Blue=2,Green=3,Yellow=4};

enum enCountryChoice{Jordan=1,Tunisa=2,Algeria=3,Oman=4,Egypt=5,Iraq=6,other=7};

int main()
{
    /**************************************************************************************************/
    /*cout << "**************************************************" << endl;
    cout << "Please Choose the number of your Color!" << endl;
    cout << "(1) Red" << endl;
    cout << "(2) Blue" << endl;
    cout << "(3) Green" << endl;
    cout << "(4) Yellow" << endl;
    cout << "**************************************************" << endl << endl;
    cout << "Your Choice is : ";

    int c;
    enScreenColor Color;
    cin >> c;
    Color = (enScreenColor)c;

    if (Color == enScreenColor::Red)
    {
        system("color 4F");
    }
    else if (Color == enScreenColor::Blue)
    {
        system("color 1F");
    }
    else if (Color == enScreenColor::Green)
    {
        system("color 2F");
    }
    else if (Color == enScreenColor::Yellow)
    {
        system("color 6F");
    }
    else
    {
        system("color 3F");
    }*/

    /**************************************************************************************************/

    cout << "**************************************************" << endl;
    cout << "Please Choose the number of your Country!" << endl;
    cout << "(1) Jordan" << endl;
    cout << "(2) Tunisa" << endl;
    cout << "(3) Algeria" << endl;
    cout << "(4) Oman" << endl;
    cout << "(5) Egypt" << endl;
    cout << "(6) Iraq" << endl;
    cout << "(7) Other" << endl;
    cout << "**************************************************" << endl << endl;
    cout << "Your Choice is : ";

    int c;
    enCountryChoice Country;
    cin >> c;
    Country = (enCountryChoice)c;

    if (Country == enCountryChoice::Algeria)
    {
        cout << "Your Country is Algeria " << endl;
    }
    else if (Country == enCountryChoice::Egypt)
    {
        cout << "Your Country is Egypt " << endl;
    }
    else if (Country == enCountryChoice::Iraq)
    {
        cout << "Your Country is Iraq " << endl;
    }
    else if (Country == enCountryChoice::Jordan)
    {
        cout << "Your Country is Jordan " << endl;
    }
    else if (Country == enCountryChoice::Oman)
    {
        cout << "Your Country is Oman " << endl;
    }
    else if (Country == enCountryChoice::Tunisa)
    {
        cout << "Your Country is Tunisa " << endl;
    }
    else
    {
        cout << "Your Country is other " << endl;
    }

}


