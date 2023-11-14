#include <iostream>
using namespace std;

struct stAddress
{
    string street1;
    string POBOX;
};
struct stOwner
{
    string FullName;
    string Phone;
    stAddress Address;
};
struct car
{
    string Brand;
    string Model;
    int Year;
    stOwner Owner;
};
int main()
{
    car Mycar1, Mycar2 ,x ;

    Mycar1.Brand = "BMW";
    Mycar1.Model = "X5";
    Mycar1.Year = 2000;
    Mycar1.Owner.FullName = "Abdelrhman Fawzy";
    Mycar1.Owner.Phone = "01556666744";
    Mycar1.Owner.Address.POBOX;

    //Mycar2.Brand = "Ford";
    //Mycar2.Model = "Mustang";
    //Mycar2.Year = 2022;

    //x.Brand = "Toyota";
    //x.Model = "corolla";
    //x.Year = 1980;

    cout << Mycar1.Brand << " " << Mycar1.Model << " " << Mycar1.Year ;
    cout << " " << Mycar1.Owner.FullName << " " << Mycar1.Owner.Phone << endl;

    //cout << Mycar2.Brand << " " << Mycar2.Model << " " << Mycar2.Year << endl;
    //cout << x.Brand << " " << x.Model << " " << x.Year << endl;
}


