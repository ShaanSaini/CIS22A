/*
* Shaan Saini
* CIS 22A T/Th 3:30pm-5:20pm
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome! This program will tell you your \"Rock\" Star Name\n";
    string first_name;
    string color;
    string birthstone;

    cout << "Please enter your first name: ";
    cin >> first_name;
    cout << "Please enter your favorite color: ";
    cin >> color;
    cout << "Please enter your birthstone: ";
    cin >> birthstone;

    cout << "Your \"Rock\" Star Name is " << first_name << " the " << color << " " << birthstone << endl;
}
