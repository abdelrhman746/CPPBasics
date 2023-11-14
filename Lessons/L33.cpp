#include <iostream>
#include <string>
using namespace std;


int main()
{
	int Number;
	string Name;
	string Country;

	cout << "Please enter Employee Number!" << endl;
	cin >> Number;

	cout << "Please enter Name!" << endl;

	cin.ignore(1, '\n'); //to ignore the enter press after entering the Number
	getline(cin, Name);

	cout << "Please enter Country!" << endl;
	cin >> Country;

	cout << "Nuumber: " << Number << " Name: " << Name << " Country: " << Country << endl;
}
