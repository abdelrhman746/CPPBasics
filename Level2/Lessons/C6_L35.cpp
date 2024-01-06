#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 50;
    cout <<"a value         =" <<  a << endl;
    cout <<"a address       =" << &a << endl;

    int* p;

    p = &a;
    p = &b;
    cout <<"Pointer Value   =" << p << endl;
    
    //cout << &p << endl;
    
    //cout << *p << endl;

    return 0;
}

