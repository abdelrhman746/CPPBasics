#include <iostream>
using namespace std;

int ReadIntNumberInRange(int From, int To)
{
    int Number;
    cout << "Please enter a number between " << From << " and " << To << endl;
    cin >> Number;
    while (Number<From || Number>To)
    {
        cout << "Wrong Number,";
        cout << "Please enter a number between " << From << " and " << To << endl;
        cin >> Number;
    }
    return Number;
}
int main()
{
    /************************************************************/
    //int i = 1;
    //while (i <= 5)
    //{
    //    cout << i << endl;
    //    i++;
    //}
    /************************************************************/
    /*int Number;
    cout << "Please enter a Postive Number!" << endl;
    cin >> Number;
    while (Number < 0)
    {
        cout << "Wrong Number, " ;
        cout << "Please enter a Postive Number!" << endl;
        cin >> Number;
    }
    cout << endl << "The Number you entered is " << Number << endl;*/
    /************************************************************/
    cout << endl << "The Number is " << ReadIntNumberInRange(18, 45) << endl;


}
