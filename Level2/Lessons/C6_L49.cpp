#include <iostream>
#include <vector>
using namespace std;

// Try Catch

int main()
{
	vector<int>num{ 1,2,3,4,5 };

	try
	{
		cout << num.at(5);
	}
	catch (...)
	{
		cout << "out of bound\n";
	}

	return 0;
}
