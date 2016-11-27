/*
* Shaan Saini
* Anoosh Behbahani
* CIS 22A T/Th 3:30 - 5:20
*/

#include <iostream>
using namespace std;

void print(const int values[], int size) {
    for (int i = 0; i < size; i++) {
        cout << values[i] << " ";

    }

}

void printTemp (const double values[], int size) {
    for (int i = 0; i < size; i++) {
        cout << values[i] << " ";

    }

}

int main()
{
    const int NUM_SCORES = 10;
    int scores[NUM_SCORES] = {90, 91, 92, 93, 94, 95, 96, 97, 98, 99};

    const int TEMP_VALUES = 3;
    double temp[TEMP_VALUES] = {25.7, 30.3, 40.9};

    char vowels[] = "aeiou";

    cout << "Integer scores:\n";
    print(scores, NUM_SCORES);

    cout << "\nDouble Temperatures:\n";
    printTemp(temp, TEMP_VALUES);
    cout << endl;

    cout << "C-string vowels:\n" << vowels << endl;
}

