#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in);//Read Mode

	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			vFileContent.push_back(Line);
		}
		MyFile.close();
	}
}
void SaveVectorToFile(string FileName, vector<string>& vFileContent)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out);//Write Mode

	if (MyFile.is_open())
	{
		for (string& Line : vFileContent)
		{
			if (Line != "")
			{
				MyFile << Line << endl;
			}
		}
	}
}
void DeleteRecordFromFile(string FileName, string Record)
{
	vector<string>vFileContent;
	LoadDataFromFileToVector(FileName, vFileContent);
	for (string& Line : vFileContent)
	{
		if (Line == Record)
		{
			Line = "";
		}
	}
	SaveVectorToFile(FileName, vFileContent);
}
void UpdateRecordInFile(string FileName, string Record, string UpdateTo)
{
	vector<string>vFileContent;
	LoadDataFromFileToVector(FileName, vFileContent);
	for (string& Line : vFileContent)
	{
		if (Line == Record)
		{
			Line = UpdateTo;
		}
	}
	SaveVectorToFile(FileName, vFileContent);
}
void PrintFileContent(string FileName)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in);//Read Mode

	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			cout << Line << endl;
		}
		MyFile.close();
	}
}
int main()
{
	cout << "File content Before Update.\n";
	PrintFileContent("Myfile.txt");

	UpdateRecordInFile("MyFile.txt", "Ali","Omar");

	cout << "\n\nFile content After Update.\n";
	PrintFileContent("Myfile.txt");


	return 0;
}
