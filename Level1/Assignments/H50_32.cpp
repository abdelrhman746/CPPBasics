#include <iostream>
using namespace std;

void PrintFrom1toN()
{
	int i = 1;
	int Num, M;
	int Power = 1;
	cout << "Please enter the Number !" << endl;
	cin >> Num;
	cout << "Please enter the Power !" << endl;
	cin >> M;
	cout << endl;
	while (i <= M)
	{
		Power *= Num;
		i++;
	}
	cout << Power << endl;
}
int main()
{
	PrintFrom1toN();
}

