#include <iostream>
#include <cmath>
using namespace std;

//void MyFunction1(int &Num1)
//{
//	Num1 = 16000;
//	cout << "Number inside the function became=" << Num1 << endl;
//}
int main()
{
	int Num1 ;
	Num1 = 1000;
	//MyFunction1(Num1);

	//cout << "Number after calling the function became=" << Num1 << endl;

	cout << Num1 << endl << &Num1 << endl;
}
