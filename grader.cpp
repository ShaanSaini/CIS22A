/*
* Shaan Saini
* Chaitanya Angadala
* CIS 22A T/Th 3:30pm-5:20pm
*/

#include <iostream>
using namespace std;

int main()
{
    double score;
    cout << "Enter a score: ";
    cin >> score;
    string grade;
    if (score >= 90) {
        grade = "A";
    } else if (score >= 80) {
        grade = "B";
    } else if (score >= 70) {
        grade = "C";
    } else if (score >= 60) {
        grade = "D";
    } else {
        grade = "F";
    }
    cout << grade << endl;
}
