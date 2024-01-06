#include <iostream>

using namespace std;

//Pointers and Structures

struct stEmployee
{
    string Name;
    float Salary;
};

int main()
{
    stEmployee Employee1,*ptr;

    Employee1.Name = "Abdelrhman Fawzy";
    Employee1.Salary = 121311;

    cout << Employee1.Name << endl;
    cout << Employee1.Salary << endl;

    ptr = &Employee1;

    cout << "\nUsing Pointer:\n";
    cout << ptr->Name << endl;
    cout << ptr->Salary << endl;

    return 0;
}

