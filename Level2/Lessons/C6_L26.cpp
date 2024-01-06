#include <iostream>
#include <iomanip>
using namespace std;
//set width manipulator 
// This library stored the std :: setw
int main()
{
	cout << "---------|--------------------------------|------------|" << endl;
	cout << "  Code   |                Name            |     Mark   |" << endl;
	cout << "---------|--------------------------------|------------|" << endl;

	/*cout << "C101" << "|" << "introduction to programming 1" << "|" << "95" << "|" << endl;
	cout << "C102" << "|" << "Computer Hardware" << "|" << "88" << "|" << endl;
	cout << "C10352" << "|" << "Network" << "|" << "75" << "|" << endl;
	cout << "-------|----------------------------|----------|" << endl;*/

	cout << setw(9) << "C101" << "|" << setw(32) << "introduction to programming 1" << "|" << setw(12) << "95" << "|" << endl;
	cout << setw(9) << "C102" << "|" << setw(32) << "Computer Hardware" << "|" << setw(12) << "88" << "|" << endl;
	cout << setw(9) << "C10352" << "|" << setw(32) << "Network" << "|" << setw(12) << "75" << "|"  << endl;
	cout << "---------|--------------------------------|------------|" << endl;
	return 0;

}
