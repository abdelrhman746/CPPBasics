#include <iostream>
using namespace std;

void myFunction()
{
    cout << "This is my first procedure, it got excuted :-)" << endl;
}

string myFunction2()
{
    return "This is my returning value function, this is the value";
}

int myFunction3()
{
    int x = 10;
    int y = 20;

    return x * y;
}
float myFunction4()
{
    float x = 10.5;
    float y = 20.3;

    return x * y;
}
int main()
{
    
    
    /****************************************************************/
    //myFunction();

    //cout << myFunction2() << endl;
    /****************************************************************/
   
    //int result;
    
    //result = myFunction3()/50;

    //cout << result << endl;

    /****************************************************************/
    
    float result;
    
    result = ceil(myFunction4());
    
    cout << result << endl;
}
