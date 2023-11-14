#include <iostream>
using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};
int main()
{
    strInfo Persons[2];

    Persons[0].FirstName = "Abdelrhman ";
    Persons[0].LastName = "Fawzy";
    Persons[0].Age = 27;
    Persons[0].Phone = "014234321";

    Persons[1].FirstName = "safy ";
    Persons[1].LastName = "alaa";
    Persons[1].Age = 55;
    Persons[1].Phone = "23452654";

    cout << Persons[0].FirstName << endl;
    cout << Persons[0].LastName << endl;
    cout << Persons[0].Age << endl;
    cout << Persons[0].Phone << endl;

    cout << Persons[1].FirstName << endl;
    cout << Persons[1].LastName << endl;
    cout << Persons[1].Age << endl;
    cout << Persons[1].Phone << endl;
}
