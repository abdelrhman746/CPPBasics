#include <iostream>
using namespace std;

void SumUntilnegative90()
{
	int Sum = 0;
	int N = 0;
	cout << "Please enter a number to sum" << endl;
	while (N != -99)
	{
		cin >> N;
		Sum += N;
	}
	cout << "The Sum is = " << Sum << endl;
}
int main()
{
	SumUntilnegative90();
}

