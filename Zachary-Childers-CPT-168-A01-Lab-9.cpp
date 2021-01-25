// Zachary-Childers-CPT-168-A01-Lab-9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    char yn = 'y';
    do
    {
        system("cls");
        system("color b0");
        cout << "\t\t\t**********************" << endl;
        cout << "\t\t\t*  Zachary Childers  *" << endl;
        cout << "\t\t\t*    CPT-168-A01     *" << endl;
        cout << "\t\t\t*~~~~~~~~~~~~~~~~~~~~*" << endl;
        cout << "\t\t\t*~~     String     ~~*" << endl;
        cout << "\t\t\t*    Manipulations   *" << endl;
        cout << "\t\t\t**********************" << endl;
        // - - - - - 
        string firstName = "";
        string lastName = "";
        string fullName = "";
        string revName = "";
        string phoneNum = "";
        string socSec = "";
        // - - - - -
        cout << "\n\t\tPlease enter your first name: ";
        cin >> firstName;
        cout << "\n\t\tPlease enter your last name ";
        cin >> lastName;
        fullName = firstName + " " + lastName;
        // - - - - - 
        do
        {
            cout << "\n\t\tPlease enter a 10 digit phone number (without dashes or parenthesis): ";
            cin >> phoneNum;
            if (phoneNum.length() != 10)
                cout << "\n\t\t\t\t\t\t\t\tInvalid data entry!!!";
        } while (phoneNum.length() != 10);

        do
        {
            cout << "\n\t\tPlease enter a 9 digit social security number, without dashes: ";
            cin >> socSec;
            if (socSec.length() != 9)
                cout << "\n\t\t\t\t\t\t\t Invalid data entry!!!";
        } while (socSec.length() != 9);
        // - - - - - 

        phoneNum.insert(0, "(");    //(xxxxxxxxxx     <  Function to
        phoneNum.insert(4, ")");   //(xxx)xxxxxxx     <  Insert
        phoneNum.insert(8, "-");  //(xxx)xxx-xxxx     <  Hypens & Dashes
        socSec.insert(3, "-");   //xxx-xxxxxx         <  in Strings
        socSec.insert(6, "-");  //xxx-xx-xxxxx        <  
        // - - - - - String Reverse Function - - - - - - 
        for (int i = fullName.length(); i > 0; i--)
            revName += fullName.substr(i - 1, 1);
      
        cout << "\n\t\t\tThis is your name reversed: " << revName << endl;
        cout << "\n\t\t\tThis is your Phone number: " << phoneNum << endl;
        cout << "\n\t\t\tThis is your social security number: " << socSec << endl;
        cout << "\n\t\tWould you like to enter more numbers? Enter 'Y' or 'N': ";
        cin >> yn;      //< loop input


    } while (toupper(yn) == 'Y');
    cout << "\t\t\t- - - - - T h a n k  Y o u - - - - -" << endl;
    system("\npause");
    return 0;
}

