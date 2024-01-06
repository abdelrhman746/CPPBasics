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

void ReadNumbers(vector <stEmployee>& vEmployees)
{
	stEmployee TempEmployee;
	char x = ' ';
	int Numbers;
	do
	{
		cout << "Please enter Employee First Name ?" << endl;
		cin >> TempEmployee.FirstName;

		cout << "Please enter Employee Last Name ?" << endl;
		cin >> TempEmployee.LastName;

		cout << "Please enter Employee Salary ?" << endl;
		cin >> TempEmployee.Salary;

		vEmployees.push_back(TempEmployee);
		cout << "do you want to add more numbers ? (Y/N)" << endl;
		cin >> x;
	} while (x == 'y' || x == 'Y');

}
void PrintVectorNumbers(vector <stEmployee>& vEmployees)
{
	//Ranged loop
	cout << "Number Vector : \n\n";
	for (stEmployee& Employees : vEmployees)
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

	ReadNumbers(vEmployees);

	PrintVectorNumbers(vEmployees);



	return 0;
}
