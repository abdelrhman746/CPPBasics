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

void ReadInfo(stPerson& PersonInfo)
{
    cout << "Please enter First Name!" << endl;
    cin >> PersonInfo.FirstName;
    cout << "Please enter Last Name!" << endl;
    cin >>PersonInfo.LastName ;
    
    cout << "Please enter E-mail!" << endl;
    cin >>PersonInfo.ContactInfo.email ;
    cout << "Please enter Phone!" << endl;
    cin >>PersonInfo.ContactInfo.Phone ;
    cout << "Please enter POBOX!" << endl;
    cin >>PersonInfo.ContactInfo.Address.POBOX ;
    cout << "Please enter Zip Code!" << endl;
    cin >>PersonInfo.ContactInfo.Address.ZipCode ;
    cout << "Please enter Street Name!" << endl;
    cin >>PersonInfo.ContactInfo.Address.StreetName;
    cout << "Please enter Building Number!" << endl;
    cin >>PersonInfo.ContactInfo.Address.BuildingNo;

    /*cout << "Please enter Gender Male/Female!" << endl;
    cin >> PersonInfo.Gender;
    cin >> PersonInfo.MaritalStatues;
    cin >> PersonInfo.FavouritColor;*/
}

void PrintInfo(stPerson PersonInfo)
{
    cout << "*******************************************************************************" << endl;
    cout << "FirstName : " << PersonInfo.FirstName << endl;
    cout << "LastName : " << PersonInfo.LastName << endl;

    cout << "E-mail : " << PersonInfo.ContactInfo.email << endl;
    cout << "Phone : " << PersonInfo.ContactInfo.Phone << endl;
    cout << "POBOX : " << PersonInfo.ContactInfo.Address.POBOX << endl;
    cout << "ZipCode : " << PersonInfo.ContactInfo.Address.ZipCode << endl;
    cout << "StreetName : " << PersonInfo.ContactInfo.Address.StreetName << endl;
    cout << "BuildingNo. : " << PersonInfo.ContactInfo.Address.BuildingNo << endl;

    /*cout << "Gender : " << PersonInfo.Gender << endl;
    cout << "MaritalStatues : " << PersonInfo.MaritalStatues << endl;
    cout << "FavouriteColor : " << PersonInfo.FavouritColor << endl;*/

    cout << "*******************************************************************************" << endl;
}
int main()
{
    stPerson Person1Info;
    ReadInfo(Person1Info);
    PrintInfo(Person1Info);
}

