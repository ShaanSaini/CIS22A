/*
* Shaan Saini
* Amoosh Behbahani
* CIS 22A 3:20-5:30pm
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main ()
{
    double sum = 0.0;
    int count = 0;
    double num;

    ifstream fin;
    fin.open("nums.txt");

    if (fin.fail()) {
        cout << "Input file failed.\n";
        exit(-1);
    }

    while (fin >> num) {
        cout << "Processing the number: " << num << endl;
        sum += num; //adding the number to our running total for the sum
        count++; //counting how many numbers are in the file
    }

    cout << "The average is: " << sum/count << endl;

    ofstream fout;

    fout.open("average.txt");
    if (fout.fail()) {
        cout << "Output file failed to open.\n";
        exit(-1);
    }

    fout << "The average is: " << sum/count << endl;

    fin.close();
    fout.close();
}
