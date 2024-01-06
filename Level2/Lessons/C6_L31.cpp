#include <vector>
#include <iostream>

using namespace std;


//remove element in vector 
//std::vector<T> vector_name

int main()
{
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);
	
	cout << "Stack Size=" << vNumbers.size() << endl;

	/*vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	if (!vNumbers.empty())
	{
		vNumbers.pop_back();
	}
	if (vNumbers.size()>0)
	{
		vNumbers.pop_back();
	}*/

	vNumbers.clear();
	cout << "Stack Size=" << vNumbers.size() << endl;
	cout << "Numbers Vector: \n\n";

	//Ranged Loop
	for (int& Number : vNumbers)
	{
		cout << Number << endl;
	}



	return 0;
}
