/*
* Shaan Saini
* CIS 22A T/Th 3:30pm - 5:20pm
*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    //The years for each gen represent the upper bound of the required range
    string generic = "You belong to ";
    const double lowerbound = 1899;
    const double greatest_gen = 1927;
    const double silents = 1945;
    const double baby_boomers = 1964;
    const double genX = 1979;
    const double millenials = 1999;
    const double genZ = 2015;

    cout << "To which generation do you belong?" << endl;
    cout << "Please enter the year of your birth: ";

    cin >> year;

    if ((year > lowerbound) && (year <= greatest_gen)) {
        cout << generic << "the \"Greatest Generation\"." << endl;
    } else if ((year > greatest_gen) && (year <= silents)) {
        cout << generic << "the \"Silent Generation\"." << endl;
    } else if ((year > silents) && (year <= baby_boomers)) {
        cout << generic << "the \"Baby Boomers\"." << endl;
    } else if ((year > baby_boomers) && (year <= genX)) {
        cout << generic << "\"Generation X\"." << endl;
    } else if ((year > genX) && (year <= millenials)) {
        cout << generic << "the \"Millenial Generation\"." << endl;
    } else if ((year > millenials) && (year <= genZ)) {
        cout << generic << "\"Generation Z\"." << endl;
    } else {
        cout << "Invalid entry! Please enter a birth year in the range 1900 - 20" << endl;
    }



}
