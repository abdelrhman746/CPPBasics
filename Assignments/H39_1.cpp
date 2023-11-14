#include <iostream>
using namespace std;

int main()
{
    int Grade[3];
    int Avg;

    cout << "Please enter Grade1!" << endl;
    cin >> Grade[0];

    cout << "Please enter Grade2!" << endl;
    cin >> Grade[1];

    cout << "Please enter Grade3!" << endl;
    cin >> Grade[2];

    cout << "**************************************************************" << endl;

    Avg = (Grade[0] + Grade[1] + Grade[2]) / 3;
    cout << "The average of grades is " << Avg << endl;


}


