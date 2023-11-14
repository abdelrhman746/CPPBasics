#include <iostream>
#include <cmath>
using namespace std;
int x = 300;
int y = 127;
void MyFunction1()
{
	int x = 500;
	int y = 32;
	cout << "The value of x insde function is:" << x << endl;
	cout << "The value of y insde function is:" << y << endl;
	cout << "The global value of x  is:" << ::x << endl;
	cout << "The global value of y  is:" << ::y << endl;
}
int main()
{
	int x = 10;
	int y = 72;
	cout << "The value of x insde Main is:" << x << endl;
	cout << "The value of y insde Main is:" << y << endl;
	::x = 7000;
	::x++;
	::y = 3;
	::y++;
	::x = 2300;
	::x++;
	::y = 3;
	::y++;
	cout << "The global value of x  is:" << ::x << endl;
	cout << "The global value of y  is:" << ::y << endl;
	MyFunction1();
	
}
