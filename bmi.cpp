/*
* Shaan Saini
* Chaitanya Angadala
* CIS 22A T/Th 3:30pm - 5:20pm
*/


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    string generic = "According to your BMI, you are ";
    double bmi;
    double weight;
    double height;
    const double UNDERWEIGHT = 18.5;
    const double HEALTHY = 24.9;
    //const double OVERWEIGHT = 29.9;
    const double OBESE = 30;
    cout << "Welcome! Let's calculate your Body Mass Index (BMI)" << endl;
    cout << "Your BMI is a ratio of your weight to your height." << endl;
    cout << "It is used to determine if you are underweight, a healthy weight, overweight or obese." << endl;

    cout << "Please enter your weight in pounds: ";
    cin >> weight;

    cout << "Please enter your height in inches: ";
    cin >> height;

    bmi = (weight / pow(height,2)) * 703;

    cout << fixed << setprecision(1);
    cout << "Your Body Mass Index is: " << bmi << endl;

    if (bmi >= OBESE) {
        cout << generic << "obese." << endl;
    }
    else if ((bmi < OBESE) && (bmi > HEALTHY)) {
        cout << generic << "a overweight." << endl;
    }
    else if ((bmi < HEALTHY) && (bmi > UNDERWEIGHT)) {
        cout << generic << "a healthy weight." << endl;
    }
    else {
        cout << generic << "underweight" << endl;
    }
}
