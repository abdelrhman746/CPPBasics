#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadInfo(stInfo &Info)
{
    cout << "please enter your FirsttName!" << endl;
    cin >> Info.FirstName;

    cout << "please enter your LastName!" << endl;
    cin >> Info.LastName;

    cout << "please enter your Age!" << endl;
    cin >> Info.Age;

    cout << "please enter your Phone No.!" << endl;
    cin >> Info.Phone;
}

void PrintInfo(stInfo Info)
{
    cout << "**********************************************************" << endl;
    cout << "FirstName : " << Info.FirstName << endl;

    cout << "LastName : " << Info.LastName << endl;

    cout << "Age : " << Info.Age << endl;

    cout << "Phone : " << Info.Phone << endl;
    cout << "**********************************************************" << endl;
}

int main()
{
    stInfo Person1Info;
    ReadInfo(Person1Info);
    PrintInfo(Person1Info);
    PrintInfo(Person1Info);
    PrintInfo(Person1Info);

    stInfo Person2Info;
    ReadInfo(Person2Info);
    PrintInfo(Person2Info);
}
