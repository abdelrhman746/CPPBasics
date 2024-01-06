#include <iostream>

using namespace std;

//common Mistakes with Pointers

int main()
{
    int x, * p;

    // Wrong !
    // p is an address but x is not
    // p = x;

    // Correct !
    // p is an address and so is &x
       p = &x;

    // Wrong !
    // *p is the value stored in &x
    // &x is an address
    // *p = &x;

    // Correct !
    // *p is the value and so is x
       *p = x;

    return 0;
}

