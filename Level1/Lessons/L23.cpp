#include <iostream>
using namespace std;

int main()
{

    short A = 10;
    short B = 20; 
    
    A += B; // A = A + B
    cout << "A = " << A << endl;
    
    A -= B; // A = A - B
    cout << "A = " << A << endl;

    A *= B; // A = A * B
    cout << "A = " << A << endl;

    A /= B; // A = A / B
    cout << "A = " << A << endl;

    A %= B; // A = A % B
    cout << "A = " << A << endl;
}
