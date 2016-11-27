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

    //cout << "Enter a sentence or q to quit: ";
    //getline(fin, sentence);

    /*if ((sentence == "Q") || (sentence == "quit") || (sentence == "Quit")) {
        sentence = "q";
    }*/

    //did this weird thing because it would not accept multiple tests for my while loop for some reason

    while (getline(fin, sentence)) /*("q" != sentence)*/ {

        numVowels = countVowels(sentence);
        numLetters = countLetters(sentence);

        fout << sentence << ":\nThere are " << numVowels << " vowels in your sentence, and " << numLetters << " letters." << endl;

        //cout << "Enter a sentence or q to quit: ";
        //getline(fin, sentence);

        /*if ((sentence == "Q") || (sentence == "quit") || (sentence == "Quit")) {
            sentence = "q";
        }*/

        //had to reset number of vowels/letters here because it would keep adding onto it otherwise

        num_vowels = 0;
        num_letters = 0;

        //getline(fin, sentence);

    }

    //cout << "Goodbye!" << endl;

}
