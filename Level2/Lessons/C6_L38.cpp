#include <iostream>

using namespace std;

//Pointers vs References

int main()
{
    int a = 10;
    int& x = a;
   
    cout << &a << endl;
    cout << &x << endl;

    cout << a << endl;
    cout << x << endl;

    int* p = &a;

    cout <<  p << endl;
    cout << *p << endl;
    
    int b = 20;
    
    p = &b;
   // &x = b; wrong!
    cout <<  p << endl;
    cout << *p << endl;

    return 0;
}

