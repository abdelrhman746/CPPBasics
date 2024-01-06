#include <iostream>

using namespace std;

int main()
{
	//Ternary Operator: short hand if
	int Number = 0;
	string result;

	cout << "The Number is ";

	(Number == 0)? cout<<"Zero\n": (Number > 0) ? cout << "Postive\n" : cout << "Negative\n";
	
	return 0;
}