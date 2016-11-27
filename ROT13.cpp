/*
* Shaan Saini
* Amoosh Behbahani
* CIS T/Th 3:30 - 5:20
*/

#include <fstream>
#include <iostream> //for testing purposes only
using namespace std;

int main()
{

    string line;
    int count = 1;
    ifstream fin;
    ofstream fout;

    fin.open("joke.txt");
    if (fin.fail()) {
        cout << "Input file failed.\n";
        exit(-1);
    }

    fout.open("encrypted.txt");
    if (fout.fail()) {
        cout << "Output file failed.\n";
        exit(-1);
    }

    while (getline(fin, line)) {
        for (int i = 0; i < line.length() ; i++) {


            if(line[i] >= 65 && line[i] < 78) //Upper case A - M
            {
                fout << (char)(line[i] + 13);
            }
            else if (line[i] >= 78 && line[i] < 91) //Upper case N - Z
            {
                fout << (char)(line[i] - 13);
            }

            else if (line[i] >= 97 && line[i] < 111) //Lower case A - M
            {
                fout << (char)(line[i] + 13);
            }

            else if (line[i] >= 111 && line[i] < 123) //Lower case N - Z
            {
                fout << (char)(line[i] - 13);
            }

            else //punctuation and spaces
            {
                fout << line[i];
            }
        }
        fout << endl;
    }

    fin.close();
    fout.close();

}
