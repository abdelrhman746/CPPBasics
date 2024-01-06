#include <iostream>
using namespace std;
//String Format (printf)
int main()
{
	char Name[] = "Abdelrhman Fawzy";
	char SchoolName[] = "Programming Advices";

	//print string and String
	printf("Dear %s, How are you? \n\n", Name);
	printf("Welcome to %s School!\n\n", SchoolName);
	
	char c = 'S';

	printf("Setting the Width of c : %*c \n", 1, c);
	printf("Setting the Width of c : %*c \n", 2, c);
	printf("Setting the Width of c : %*c \n", 3, c);
	printf("Setting the Width of c : %*c \n", 4, c);
	printf("Setting the Width of c : %*c \n", 5, c);

}
