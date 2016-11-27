/*
* Shaan Saini
* CIS 22A T/TH 3:30pm - 5:20pm
*/

#include <iostream>
#include <climits>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    int big = 0;
    int small = INT_MAX;
    int num;

    ifstream fin;
    ofstream fout;

    fin.open("numbers.txt");
    if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }

    fout.open("biggestSmallest.txt");
    if (fout.fail()) {
        cout << "Output file failed to open.\n";
        exit(-1);
    }

    while (fin >> num) {
        if (num > big) {
            big = num;
        } else if (num < small) {
            small = num;
        }
    }

    fout << "Biggest number = " << big << endl << "Smallest number = " << small << endl;

    fin.close();
    fout.close();

}
