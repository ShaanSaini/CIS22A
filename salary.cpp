/*
* Shaan Saini
* Anoosh Behbani
* CIS 22A T/Th 3:30 - 5:20
*/

#include <iostream>
#include <iomanip>
using namespace std;

int hours;
double hourly_wage;
double weekly_salary = 0;
double monthly_salary = 0;
double yearly_salary = 0;

int weeklySalary(int hours, double hourly_wage) {
    double weekly_salary = hours * hourly_wage;
    return weekly_salary;
}

int monthlySalary(int hours, double hourly_wage) {
    double monthly_salary = weeklySalary(hours, hourly_wage) * 4;
    return monthly_salary;
}

int yearlySalary(int hours, double hourly_wage) {
    double yearly_salary = weeklySalary(hours, hourly_wage) * 50;
    return yearly_salary;
}

int main() {

    cout << "This program will calculate your weekly, monthly and yearly salary!\n";
    cout << "Please enter your hourly wage: ";
    cin >> hourly_wage;

    cout << "Please enter the number of hours you work each week: ";
    cin >> hours;

    //call functions below

    weekly_salary = weeklySalary(hours, hourly_wage);
    monthly_salary = monthlySalary(hours, hourly_wage);
    yearly_salary = yearlySalary(hours, hourly_wage);

    cout << fixed << setprecision(2);

    cout << "You make $" << weekly_salary << " per week.\n";
    cout << "You make $" << monthly_salary << " per month.\n";
    cout << "You make $" << yearly_salary << " per year.\n";

}
