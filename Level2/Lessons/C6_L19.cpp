#include <iostream>
using namespace std;

// Recursive Function
void PrintNumbers(int N, int M)
{
    if (N <= M)
    {
        cout << N << endl;
        PrintNumbers(N + 1, M);
    }
}

int main()
{
    PrintNumbers(1,9);

    return 0;
}
