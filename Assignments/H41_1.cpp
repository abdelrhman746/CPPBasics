#include <iostream>
using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadInfo(strInfo &Info)
{
    cout << "please enter the Frist Name !" << endl;
    cin >> Info.FirstName ;

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

void ReadPersonsInfo(strInfo Persons[2])
{
    ReadInfo(Persons[0]);
    ReadInfo(Persons[1]);
}

void PrintPersonsInfo(strInfo Persons[2])
{
    cout << "***********************************************************" << endl;
    PrintInfo(Persons[0]);
    cout << "***********************************************************" << endl;
    cout << "***********************************************************" << endl;
    PrintInfo(Persons[1]);
    cout << "***********************************************************" << endl;
}
int main()
{
    strInfo Persons[2];
    ReadPersonsInfo(Persons);
    PrintPersonsInfo(Persons);   
}
