#include <iostream>
using namespace std;

// Recursive Function
void PrintNumbers(int N, int M)
{
    if (M >= N)
    {
        cout << M << endl;
        PrintNumbers(N, M-1);
    }
}

int main()
{
    PrintNumbers(1, 9);

    return 0;
}
