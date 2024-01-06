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

	//vNumbers.clear();

	cout << "First Element: " << vNumbers.front() << endl;
	cout << "Last Element: " << vNumbers.back() << endl;

	cout << "Size : " << vNumbers.size() << endl;

	cout << "Capacity: " << vNumbers.capacity() << endl;

	cout << "Empty : " << vNumbers.empty() << endl;

	//Ranged Loop
	for (int& Number : vNumbers)
	{
		cout << Number << endl;
	}



	return 0;
}
