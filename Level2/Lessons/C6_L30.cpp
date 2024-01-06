#include <vector>
#include <iostream>

using namespace std;

struct stEmployee {
	string FirstName;
	string LastName;
	int	Salary;
};

//vector of Structure
//std::vector<T> vector_name

vector<int> ReadNumbers(vector <int>& vNumbers)
{
	char x = ' ';
	int Numbers;
	do
	{
		cout << "Please enter a number ?" << endl;
		cin >> Numbers;
		vNumbers.push_back(Numbers);
		cout << "do you want to add more numbers ? (Y/N)" << endl;
		cin >> x;
	} while (x == 'y' || x == 'Y');

	return vNumbers;
}
void PrintVectorNumbers(vector <stEmployee>& vEmployees)
{
	//Ranged loop
	cout << "Number Vector : \n\n";
	for (stEmployee & Employees : vEmployees)
	{
		cout << "FirstName : " << Employees.FirstName << endl;
		cout << "LastName : " << Employees.LastName << endl;
		cout << "Salary : " << Employees.Salary << endl;
		cout << endl;
	}
	

}
int main()
{
	vector <stEmployee> vEmployees;

	stEmployee TempEmployee;

	TempEmployee.FirstName = "Abdelrhman";
	TempEmployee.LastName = "Fawzy";
	TempEmployee.Salary = 1233123;

	vEmployees.push_back(TempEmployee);

	TempEmployee.FirstName = "Ali";
	TempEmployee.LastName = "Maher";
	TempEmployee.Salary = 12123;

	vEmployees.push_back(TempEmployee);

	TempEmployee.FirstName = "Aya";
	TempEmployee.LastName = "Omran";
	TempEmployee.Salary = 15423;

	vEmployees.push_back(TempEmployee);


	PrintVectorNumbers(vEmployees);



	return 0;
}
