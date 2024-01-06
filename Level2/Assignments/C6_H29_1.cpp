#include <vector>
#include <iostream>

using namespace std;

//vector Add Elements
//std::vector<T> vector_name

vector<int> ReadNumbers(vector <int> &vNumbers)
{
	char x = ' ';
	int Numbers;
	do
	{
		cout << "Please enter a number ?" << endl;
		cin >> Numbers;
		vNumbers.push_back(Numbers);
		cout << "do you want to add more numbers ? (Y/N)" << endl;
		cin >> x;
	} while (x == 'y' || x == 'Y');
	
	return vNumbers;
}
void PrintVectorNumbers(vector <int> &vNumbers)
{
	//Ranged loop
	cout << "Number Vector : \n\n";
	for (int& Number : vNumbers)
	{
		cout << Number << endl;
	}
	cout << endl;

}
int main()
{
	vector <int> vNumbers;

	ReadNumbers(vNumbers);

	PrintVectorNumbers(vNumbers);
	

	
	return 0;
}
