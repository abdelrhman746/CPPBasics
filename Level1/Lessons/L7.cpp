#include <iostream>
using namespace std;
int main()
{
    // Note By default everything is signed

   /* int v1;
    signed v2;

    unsigned int v3;

    short int v4;
    short v5;

    unsigned short int v6;

    unsigned short int v6;
    unsigned short v7;

    signed long int v8;
    long intr v9;
    long v10;

    unsigned long v11;

    long long int v12;

    unsigned long long v13;

    long double v14;

    signed char v15;
    char v16;

    unsigned char v17;*/

    /**************************************************/

    //double distance = 56E12; //56E12 is equal to 56*10^12
    //cout << distance << endl;

    //short d = 3434233; //Error! out of range
    //cout << d << endl;

    //unsigned int a = -10; //Error! can only store positive numbers
    //cout << a << endl;

    /**************************************************/

    /*cout << "The size of bool data type is " << sizeof(bool) << endl;
    cout << "The size of char data type is " << sizeof(char) << endl;
    cout << "The size of short int data type is " << sizeof(short int) << endl;
    cout << "The size of  int data type is " << sizeof( int) << endl;

    cout << "The size of  int long data type is " << sizeof(long) << endl;
    cout << "The size of  int long long data type is " << sizeof(long long) << endl;

    cout << "The size of float data type is " << sizeof(float) << endl;
    cout << "The size of double data type is " << sizeof(double) << endl;*/

    /**************************************************/

    cout << "***********************************************************************"<< endl;
    cout << "char Range: (" << CHAR_MIN <<","<<CHAR_MAX<<")" << endl;
    cout << "unsigned char Range: (" << 0 << "," << UCHAR_MAX << ")" << endl << endl;
    
    cout << "short Range: (" << SHRT_MIN << "," << SHRT_MAX << ")" << endl;
    cout << "unsigned int Range: (" << 0 << "," << USHRT_MAX << ")" << endl << endl;

    cout << "int Range: (" << INT_MIN << "," << INT_MAX << ")" << endl;
    cout << "unsigned int Range: (" << 0 << "," << UINT_MAX << ")" << endl ;
    cout << "long int Range: (" << LONG_MIN << "," << LONG_MAX << ")" << endl;
    cout << "unsigned long int Range: (" << 0 << "," << ULONG_MAX << ")" << endl << endl;

    cout << "long long int Range: (" << LLONG_MIN << "," << LLONG_MAX << ")" << endl;
    cout << "unsigned long long int Range: (" << 0 << "," << ULLONG_MAX << ")" << endl << endl;

    cout << "float Range: (" << FLT_MIN << "," << FLT_MAX << ")" << endl;
    cout << " float (negative) Range: (" << -FLT_MIN << "," << -FLT_MAX << ")" << endl << endl;

    cout << "double Range: (" << DBL_MIN << "," << DBL_MAX << ")" << endl;
    cout << " double (negative) Range: (" << -DBL_MIN << "," << -DBL_MAX << ")" << endl << endl;
    cout << "***********************************************************************" << endl;
}
