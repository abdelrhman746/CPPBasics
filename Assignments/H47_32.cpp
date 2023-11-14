#include <iostream>
using namespace std;

void PrintFrom1toN()
{
	int i, Num , M;
	int Power = 1;
	cout << "Please enter the Number !" << endl;
	cin >> Num;
	cout << "Please enter the Power !" << endl;
	cin >> M;
	cout << endl;
	for (i = 1; i <= M; i++)
	{
		Power *= Num;
	}
	cout << Power << endl;
}
int main()
{
	PrintFrom1toN();
}

