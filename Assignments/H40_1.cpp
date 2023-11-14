#include <iostream>
using namespace std;

void ReadArrayData(int Grade[3])
{
    cout << "Please enter Grade1!" << endl;
    cin >> Grade[0];

    cout << "Please enter Grade2!" << endl;
    cin >> Grade[1];

    cout << "Please enter Grade3!" << endl;
    cin >> Grade[2];
}
float CalculateArrayAverage(int Grade[3])
{
    float Avg;
    Avg = (Grade[0] + Grade[1] + Grade[2]) / 3;
    return Avg;
}

void PrintAvg(int Avg)
{
    cout << "**************************************************************" << endl;

    cout << "The average of grades is " << Avg << endl;
}
int main()
{
    int Grade[3];
    float Avg;

    ReadArrayData(Grade);
    Avg=CalculateArrayAverage(Grade);
    PrintAvg(Avg);
    


}


