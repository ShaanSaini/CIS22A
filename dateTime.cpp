/*
* Shaan Saini
* CIS 22A T/Th 3:30 - 5:20
*/

#include<iostream>
using namespace std;

void formatDateAmerican(int year, int month, int day) {
    cout << "Today's date in the U.S.: " << month << "/" << day << "/" << year << endl;
}

void formatDateEuropean(int year, int month, int day) {
    cout << "Today's date in Europe: " << day << "." << month << "." << year << endl;
}

void formatTimeAmerican(int hour, int minutes, string dayEve) {
    if (dayEve == "morning") {
        dayEve = "am";
    } else if (dayEve == "evening") {
        dayEve = "pm";
    }
    cout << "The current time written in American style: " << hour << ":" << minutes << dayEve << endl;
}

void formatTimeEuropean(int hour, int minutes, string dayEve) {
    if (dayEve == "evening") {
        hour += 12;
    }
    cout << "The current time according to the 24 hour clock: " << hour << ":" << minutes;
}

int main() {
    int year;
    int day;
    int month;
    int hour;
    int minutes;
    string dayEve;

    cout << "Welcome! This program will print dates and times in both the American and European styles!\n\n";

    cout <<"First, let's print a formatted date.\n\n";

    cout << "Please enter the current year: ";
    cin >> year;
    cout << "Please enter the current month: ";
    cin >> month;
    cout << "Please enter the current day: ";
    cin >> day;
    cout << endl;

    formatDateAmerican(year, month, day);
    formatDateEuropean(year, month, day);

    cout << "\nNow, let's print a formatted time.\n\n";

    cout << "Please enter the current hour: ";
    cin >> hour;
    cout << "Please enter the current minutes: ";
    cin >> minutes;
    cout << "Please enter whether it is \"morning\" or \"evening\": ";
    cin >> dayEve;
    cout << endl;


    formatTimeAmerican(hour, minutes, dayEve);
    formatTimeEuropean(hour, minutes, dayEve);

    cout << "\n\nBye! See you another day!" << endl;

}
