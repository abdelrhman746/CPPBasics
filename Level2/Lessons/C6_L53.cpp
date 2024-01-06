#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::out | ios::app );//append Mode

	if (MyFile.is_open())
	{
		MyFile << "Abdelrhman \n";
		MyFile << "Fawzy\n";

		MyFile.close();
	}
	return 0;
}
