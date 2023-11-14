#include <iostream>
using namespace std;

int main()
{
    int arr[10] = { 10,20,44,55,33,22,99,88,99,100 };
    int searchfor = 20;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == searchfor)
        {
            cout << "found at position " << i  << endl;
            break;
        }
    }
}
