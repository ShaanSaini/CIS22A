/*
* Shaan Saini
* CIS 22A T/Th 3:30 - 5:20pm
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    const int SIZE = 12;
    double rainfall[SIZE];
    double avg_rainfall[SIZE];
    ifstream fin;
    ofstream fout;

    fin.open("rainfallToDate.txt");

    for (int i = 0; i < SIZE; i++) {
        fin >> rainfall[i];
    }

    fin.close();
    fin.open("averageRainfall.txt");

    for (int i = 0; i < SIZE; i++) {
        fin >> avg_rainfall[i];
    }

    fout.open("rainfallComparison.txt");

    fout << "Rainfall for Cupertino: A Comparison" << endl << endl;
    fout << "Month\tAverage\t2014-15\tDeficit" << endl << endl;

    for (int i = 0; i < SIZE; i++) {
        fout << fixed << setprecision(2);
        fout << i + 1 << "\t" << avg_rainfall[i] << "\t" << rainfall[i] << "\t" << avg_rainfall[i] - rainfall[i] << endl;
    }

    fout.close();

}
