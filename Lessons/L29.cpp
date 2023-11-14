#include <iostream>
using namespace std;

enum enGender { Male, Female };
enum enMaritalStatus { Single, Married };
enum enColor { Red, Green, Yellow, Blue };

struct stAddress
{
    string StreetName;
    string BuildingNo;
    string POBOX;
    string ZipCode;
};
struct stSocialMedia
{
    string Facebook;
    string Instagram;
    string Whatsapp;
};
struct stContactInfo
{
    string Phone;
    string email;
    stAddress Address;
    stSocialMedia SocialMedia;
};
struct stPerson
{
    string FirstName;
    string LastName;
    stContactInfo ContactInfo;
    enMaritalStatus MaritalStatues;
    enGender Gender;
    enColor FavouritColor;
   

};
int main()
{
    stPerson Person1;

    Person1.FirstName = "Abdelrhman";
    Person1.LastName = "Fawzy";

    Person1.ContactInfo.email = "abcd@xyz.com";
    Person1.ContactInfo.Phone = "+2054365345737";
    Person1.ContactInfo.Address.POBOX = "77777";
    Person1.ContactInfo.Address.ZipCode = "111195";
    Person1.ContactInfo.Address.StreetName = "Queen street";
    Person1.ContactInfo.Address.BuildingNo = " 3123";

    Person1.Gender = enGender::Male;
    Person1.MaritalStatues = enMaritalStatus::Married;
    Person1.FavouritColor = enColor::Blue;


    cout << "*******************************************************************************" << endl;
    cout << "FirstName : " << Person1.FirstName << endl;
    cout << "LastName : " << Person1.LastName << endl;

    cout << "E-mail : " << Person1.ContactInfo.email << endl;
    cout << "Phone : " << Person1.ContactInfo.Phone << endl;
    cout << "POBOX : " << Person1.ContactInfo.Address.POBOX << endl;
    cout << "ZipCode : " << Person1.ContactInfo.Address.ZipCode << endl;
    cout << "StreetName : " << Person1.ContactInfo.Address.StreetName << endl;
    cout << "BuildingNo. : " << Person1.ContactInfo.Address.BuildingNo << endl;

    cout << "Gender : " << Person1.Gender << endl;
    cout << "MaritalStatues : " << Person1.MaritalStatues << endl;
    cout << "FavouriteColor : " << Person1.FavouritColor << endl;

    cout << "*******************************************************************************" << endl;

}


