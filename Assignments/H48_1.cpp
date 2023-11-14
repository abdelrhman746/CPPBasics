#include <iostream>
using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadInfo(strInfo& Info)
{
    cout << "please enter the Frist Name !" << endl;
    cin >> Info.FirstName;

    cout << "please enter the LAst Name !" << endl;
    cin >> Info.LastName;

    cout << "please enter the Age !" << endl;
    cin >> Info.Age;

    cout << "please enter the Phone !" << endl;
    cin >> Info.Phone;




}

void PrintInfo(strInfo Info)
{
    cout << Info.FirstName << endl;
    cout << Info.LastName << endl;
    cout << Info.Age << endl;
    cout << Info.Phone << endl;
}

void ReadPersonsInfo(strInfo Persons[100],int Length)
{
    for (int i = 0; i <= Length - 1; i++)
    {
        ReadInfo(Persons[i]);
    }
}

void PrintPersonsInfo(strInfo Persons[100], int Length)
{
    for (int i = 0; i <= Length - 1; i++)
    {
        cout << "***********************************************************" << endl;
        PrintInfo(Persons[i]);
        cout << "***********************************************************" << endl;
    }
}

int GetNumberOfPersons()
{
    int Length;
    cout << "Please enter the number of persons";
    cin >> Length;
    return Length;
}
int main()
{
    int Length;
    Length = GetNumberOfPersons();
    strInfo Persons[100];
    ReadPersonsInfo(Persons, Length);
    PrintPersonsInfo(Persons, Length);
}
