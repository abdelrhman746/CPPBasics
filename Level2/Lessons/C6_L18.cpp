#include <iostream>
using namespace std;

//Visiual Studio Function Tips
//1- Function collapsing and expanding
//2- Go to Definition
//3- Go to Declaration
//4- View Call Heirarchy
//5- Find All Referances
//6- Peek Definition
//7- Rename Function

void Function2();

void Function4()
{
    cout << "Hi I'm function 4" << endl;
}

void Fucntion3()
{
    Function4();
}

void Function2()
{
    Fucntion3();
}

void Function1()
{
    Function2();
    Function4();
}

int main()
{
    Function1();

    return 0;
}
