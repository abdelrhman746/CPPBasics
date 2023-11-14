#include <iostream>
using namespace std;

enum enWeekDay { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saterday = 7 };

void ShowWeekDayMenu()
{
    cout << "****************************************************************" << endl;
    cout << "                            WeekDays                            " << endl;
    cout << "****************************************************************" << endl;
    cout << "1- Sunday " << endl;
    cout << "2- Monday " << endl;
    cout << "3- Tuesday " << endl;
    cout << "4- Wednesday " << endl;
    cout << "5- Thursday " << endl;
    cout << "6- Friday " << endl;
    cout << "7- Saterday " << endl;
    cout << "****************************************************************" << endl << endl;
    cout << "Please enter the number of Today : ";
}
enWeekDay ReadDayOfWeek()
{
    int Day;
    cin >> Day;
    
    return (enWeekDay)Day;
}

string GetWeekDayName(enWeekDay WeekDay)
{

    switch (WeekDay)
    {
    case enWeekDay::Sunday:
        return "Sunday" ;
        break;
    case enWeekDay::Monday:
        return "Monday";
        break;
    case enWeekDay::Tuesday:
        return "Tuesday";
        break;
    case enWeekDay::Wednesday:
        return "Wednesday";
        break;
    case enWeekDay::Thursday:
        return "Thursday";
        break;
    case enWeekDay::Friday:
        return "Friday";
        break;
    case enWeekDay::Saterday:
        return "Saterday";
        break;
    default:
        return " Not A Week Day";
        break;
    }
}

int main()
{
    ShowWeekDayMenu();
    

    cout << "Today is "<<GetWeekDayName(ReadDayOfWeek()) << endl;
}
