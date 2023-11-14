#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Str1, Str2, Str3;
	cout << "Please enter String1" << endl;
	getline(cin, Str1);
	cout << "Please enter String2" << endl;
	cin >> Str2;
	cout << "Please enter String3" << endl;
	cin >> Str3;
	string Str4 = Str2 + Str3;
	int sum = stoi(Str2) + stoi(Str3);
	cout << "************************************************************" << endl;
	cout << "The lenght of String1 is "<< Str1.length()<< endl;

	cout << "characters at 0,2,4,7 " << Str1[0] << " " << Str1[2] << " " << Str1[4] << " " << Str1[7] << endl;
	
	cout << "concatenating String2 and String3 =" << Str4 << endl;

	cout << Str2 << " * " << Str3 << " = " << Str4 << endl;



	return 0;
}
