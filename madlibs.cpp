/*
* Shaan Saini
* CIS 22A T/Th 3:30pm-5:20pm
*/

#include <iostream>
using namespace std;

int main()
{
    string name;
    string instructorName;
    string food;
    string num;
    string adjective;
    string color;
    string animal;

    cout << "Enter your first name: ";
    cin >> name;
    cout << "Enter your instructor's last name: ";
    cin >> instructorName;
    cout << "Enter a food: ";
    cin >> food;
    cout << "Enter a number between 100 and 120: ";
    cin >> num;
    cout << "Enter an adjective: ";
    cin >> adjective;
    cout << "Enter a color: ";
    cin >> color;
    cout << "Enter an animal: ";
    cin >> animal;

    cout << "\nDear Instructor " << instructorName << endl << endl;
    cout << "I am sorry that I am unable to turn in my homework today. First I ate a rotten " << food << " which made me turn " << color << " and very sick. I came down with a fever of " << num << ". Next, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food << " on my homework, because my pet ate my homework.\n\n";
    cout << "I knew I should not have ordered that " << animal << " on eBay!\n\n I know you do not accept late homework but I am hoping you will make an exception in my case.\n\n";
    cout << "Sincerely, \n" << name << endl;
}
