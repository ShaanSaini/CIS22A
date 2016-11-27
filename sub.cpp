/*
* Shaan Saini
* Anoosh Behbani
* CIS 22A T/Th 3:30 - 5:20
*/

#include <iostream>
using namespace std;

int sub(int a, int b) {
    int sum = a - b;
    return sum;
}

int main() {
    cout << "Enter two numbers to subtract: ";
    int num1, num2;
    cin >> num1 >> num2;
    int diff = sub(num1, num2);
    cout << "Difference=" << diff << endl;
}
