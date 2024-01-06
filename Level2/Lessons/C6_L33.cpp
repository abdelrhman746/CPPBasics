#include <iostream>

using namespace std;

//Call by reference/Call by Value

void Function1(int &x)
{
	x++;
}

int main()
{
	int a = 10;

	Function1(a);

	cout << a << endl;
	cout << &a << endl;

	return 0;
}

