#include <iostream>
using namespace std;

int main()
{

    short A = 10;
    short B = A++; // B will take the old value of A , them A will icrease by 1
    cout << "B = " << B << endl;
    cout << "A = " << A << endl;
    B = ++A ;//  A will icrease by 1, them B will take the value of A
    cout << "B = " << B << endl;
    cout << "A = " << A << endl;
    
}
 