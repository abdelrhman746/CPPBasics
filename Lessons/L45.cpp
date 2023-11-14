#include <iostream>
using namespace std;

enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };
enum enCountryChoice { Jordan = 1, Tunisa = 2, Algeria = 3, Oman = 4, Egypt = 5, Iraq = 6, other = 7 };

int main()
{
    /**************************************************************************************************/
    /*int day = 1;

    switch (day)
    {
    case 1:
        cout << "sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saterday";
        break;
    default:
        cout << "Not a week Day";
        break;
        
    }*/
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

    switch (Color)
    {
    case enScreenColor::Red:
        system("color 4F");
        break;
    case enScreenColor::Blue:
        system("color 1F");
        break;
    case enScreenColor::Green:
        system("color 2F");
        break;
    case enScreenColor::Yellow:
        system("color 6F");
        break;
    default :
        system("color 3F");
        break;
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

    switch (Country)
    {
    case enCountryChoice::Algeria:
        cout << "Your Country is Algeria " << endl;
        break;
    case enCountryChoice::Egypt:
        cout << "Your Country is Egypt " << endl;
        break;
    case enCountryChoice::Iraq:
        cout << "Your Country is Iraq " << endl;
        break;
    case enCountryChoice::Jordan:
        cout << "Your Country is Jordan " << endl;
        break;
    case enCountryChoice::Oman:
        cout << "Your Country is Oman " << endl;
        break;
    case enCountryChoice::Tunisa:
        cout << "Your Country is Tunisa " << endl;
        break;
    default :
        cout << "Your Country is Other " << endl;
        break;
    }
}





