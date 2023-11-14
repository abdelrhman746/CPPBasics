#include <iostream>
using namespace std;

struct stSocialMedia
{
    string Facebook;
    string Instagram;
    string Whatsapp;
};
struct stContacts
{
    string Phone;
    string email;
    stSocialMedia SocialMedia;
};
struct stCard
{
    string Name;
    short Age;
    string City;
    string Country;
    int MonthlySalary;
    int YearlySalary = (15000 * 12);
    char Gender;
    bool Marraige;
    stContacts Contacts;
    
};
int main()
{
    stCard MyCard;

    MyCard.Name = "Abdelrhman Fawzy";
    MyCard.Age = 27;
    MyCard.City = "Cairo";
    MyCard.Country = "Egypt";
    MyCard.MonthlySalary = 15000;
    MyCard.Gender = 'M';
    MyCard.Marraige = true;
    MyCard.Contacts.Phone = "01556666744";
    MyCard.Contacts.email = "abdelrhmanf746@gmail.com";
    MyCard.Contacts.SocialMedia.Facebook = "facebook.com\abdelrhman.fawzy";
    MyCard.Contacts.SocialMedia.Instagram = "instagram.com\abdelrhman.fawzy";
    MyCard.Contacts.SocialMedia.Whatsapp = "+201556666744";

    cout << "*******************************************************************************" << endl;
    cout << "Name : " << MyCard.Name<< endl;
    cout << "Age : " << MyCard.Age << endl;
    cout << "City : " << MyCard.City << endl;
    cout << "Country : " << MyCard.Country << endl;
    cout << "Monthly Salary : " << MyCard.MonthlySalary << endl;
    cout << "Yearly Salary : " << MyCard.YearlySalary << endl;
    cout << "Gender : " << MyCard.Gender << endl;
    cout << "Marraige : " << MyCard.Marraige << endl;
    cout << "Phone : " << MyCard.Contacts.Phone << endl;
    cout << "E-mail : " << MyCard.Contacts.email << endl;
    cout << "Facebook : " << MyCard.Contacts.SocialMedia.Facebook << endl;
    cout << "Istagram : " << MyCard.Contacts.SocialMedia.Instagram << endl;
    cout << "What's app : " << MyCard.Contacts.SocialMedia.Whatsapp << endl;
    cout << "*******************************************************************************" << endl;

    
}


