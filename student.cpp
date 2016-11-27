/*
* Shaan Saini
* CIS 22A T / TH 3:30pm-5:20pm
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Collecting Student Data!\n\n";
    cout << "Please enter the first letter of your last name: ";
    char lastInitial;
    cin >> lastInitial;
    cout << "Please enter your student ID number: ";
    int studentID;
    cin >> studentID;
    cout << "Please enter the number of years you have attended De Anza: ";
    double years_at_de_anza;
    cin >> years_at_de_anza;

    cout << "\nThe first initial of your last name is " << lastInitial << ".\n";
    cout << "Your student ID number is " << studentID << ".\n";
    cout << "You have attended De Anza for " << years_at_de_anza << " years.\n";
}
