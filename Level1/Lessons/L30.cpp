#include <iostream>
#include <string>
using namespace std;


int main()
{
	/*******************************************************************************/
	/*int Num1;
	double Num2 = 18.99;*/
	//Num1 = Num2; //Implicit conversion from double to int

	//Num1 = (int)Num2; //Explicit Conversion
	
	//Num1 = int(Num2); //Explicit Conversion

	//cout << Num1 << endl;

	/*******************************************************************************/

	//string str = "123.456";

	////	convert string to Integer
	//int num_int = stoi(str);

	////	convert string to Float
	//float num_float = stof(str);

	////	convert string to double
	//double num_double = stod(str);

	//cout <<"num_int= " << num_int << endl;
	//
	//cout << "num_float= " << num_float << endl;

	//cout << "num_double= " << num_double << endl;

	/*******************************************************************************/

	int Num1 = 123;
	double Num2 = 18.99;

	string St1,St2;

	St1 = to_string(Num1);
	St2 = to_string(Num2);

	cout << St1 << endl;
	cout << St2 << endl;
}


