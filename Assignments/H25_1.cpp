#include <iostream>
using namespace std;

int main()
{

   

    cout << (12 == 12) << endl;
    cout << (12 > 7) << endl;
    cout << ( 8<6 ) << endl;
    cout << ( 8==8 ) << endl;
    cout << (12<=12) << endl;
    cout << (7==5) << endl << endl;

    cout << !(12>=12) << endl;
    cout << !(12<7) << endl;
    cout << !(8<6) << endl;
    cout << !(8==8) << endl;
    cout << !(12<=12) << endl;
    cout << !(7==5) << endl << endl;

    cout << (1&&1) << endl;
    cout << (1&&0) << endl;
    cout << (0||1) << endl;
    cout << (0||0) << endl;
    cout << !(0) << endl;
    cout << !(1||0) << endl << endl;

    cout << ((7 == 7)&& (7 > 5)) << endl;
    cout << ((7 == 7) && (7 < 5)) << endl;
    cout << ((7 == 7) || (7 < 5)) << endl;
    cout << ((7 < 7) || (7 > 5)) << endl;
    cout << !((7 == 7) && (7 > 5)) << endl;
    cout << !((7 == 7) && (7 < 5)) << endl << endl;



}
