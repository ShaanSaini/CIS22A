/*
* Shaan Saini
* CIS 22A T/Th 3:30 - 5:20pm
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int num_vowels;
int letter;
int num_letters;
ifstream fin;
ofstream fout;

//I simplified and cleaned this up a lot because the other file contained a lot of commented out stuff, let me know if you want the other file to show
//that I actually made this one by editing that one!

int countVowels(string s)
{
    for (int i = 0; i < s.length(); i++) {
        letter = (int) s[i];
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
            num_vowels++;
        }
    }

    return num_vowels;
}

int countLetters(string s)
{
    for (int i = 0; i < s.length(); i++) {
        letter = (int) s[i];
        if ((letter >= 'a') && (letter <= 'z') || (letter >= 'A') && (letter <= 'Z')) {
            num_letters++;
        }
    }

    return num_letters;
}

int main()
{
    int numLetters;
    string sentence = "y";
    int numVowels;

    fin.open("sentences.txt");
    if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }

    fout.open("count.txt");
    if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }

    while (getline(fin, sentence)) {

        numVowels = countVowels(sentence);
        numLetters = countLetters(sentence);

        fout << sentence << ":\nThere are " << numVowels << " vowels in your sentence, and " << numLetters << " letters." << endl;

        num_vowels = 0;
        num_letters = 0;

    }

    fin.close();
    fout.close();
}
