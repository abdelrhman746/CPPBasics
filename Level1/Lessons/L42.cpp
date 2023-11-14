#include <iostream>
using namespace std;

int main()
{
    /***********************************************************************/
    //int x = 10;
    //if ( x >= 5 || x <= 8 )
    //{
    //    cout << "The code of if body has executed." << endl;
    //}
    //cout << "The code  after if body always has executed." << endl;

    /***********************************************************************/

    int x;

    cout << "Please enter your number!" << endl;
    cin >> x;

    if (x > 5)
    {
        cout << "Yes, X is greater than 5" << endl;
    }
    else
    {
        cout << "No, X is Less than 5" << endl;
    }
    cout << "The code  after if body always has executed." << endl;
}
    
