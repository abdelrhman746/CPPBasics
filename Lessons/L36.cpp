#include <iostream>
#include <cmath>
using namespace std;
int x = 300;
void MyFunction1()
{
	int x = 500;
	cout << "The value of x insde function is:" << x << endl;
}
int main()
{
	int x = 10;
	cout << "The value of x insde Main is:" << x << endl;
	MyFunction1();
	::x++;
	::x = 7000;
	cout << "The global value of x  is:" << ::x << endl;
}
