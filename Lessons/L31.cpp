#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*******************************************************************************************/
	//string Mystring = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//cout << "the length of the string is: " << Mystring.length() << endl;

	//cout << Mystring[2] << endl; // Will print C
	//cout << Mystring[10] << endl; // Will print K

	////string S1 = "10", S2 = "20";
	////string S3 = S1 + S2;
	////cout << S3 << endl; //Will print 1020

	////int Sum = stoi(S1) + stoi(S2);
	////cout << Sum << endl; //Will print 30

	//string S1 = "AB", S2 = "CD";
	//string S3 = S1 + S2;
	//cout << S3 << endl;//Will print ABCD
	/*******************************************************************************************/

	string FullName;
	//cin >> FullName;

	getline(cin, FullName);
	 
	cout<< FullName << endl;

	return 0;
}
