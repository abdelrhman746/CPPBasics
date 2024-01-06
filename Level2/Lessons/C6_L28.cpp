#include <vector>
#include <iostream>

using namespace std;

//vector Definition and Declaration
//std::vector<T> vector_name
int main()
{
	vector <int> vNumbers = { 10,20,30,40,50,60,70,80,90,100 };

	cout << "Number Vector = ";

	//Ranged loop
	for (int &Number : vNumbers)
	{
		cout << Number << "   ";
	}
	cout << endl;

	return 0;
}
