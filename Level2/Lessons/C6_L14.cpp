#include <iostream>
using namespace std;
//function declaration

void add(int x, int y);

int main()
{
    add(10, 20);
    return 0;
}

//function definition
void add(int a, int b)
{
    cout << (a + b);
}
