#include <iostream>
#include <cmath>
using namespace std;

// Recursive Function
void PrintNPowerM(int N, int M, int Temp=1)
{
    if (M > 0)
    {
        Temp = Temp*N;
        M--;
        PrintNPowerM(N,M,Temp);
       
    }
    else
    {
        cout << Temp << endl;
    }
}
int MyPower(int Base, int Power)
{
    if (Power == 0)
    {
        return 1;
    }
    else
    {
        return Base * MyPower(Base, Power - 1);
    }
}
int main()
{
    
    PrintNPowerM(2, 10);

    cout << MyPower(2,10) << endl;

    return 0;
}
