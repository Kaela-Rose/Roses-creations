//Mikaela-Rose Porter
/*
Purpose: A program that allows the user to input from the keyboard
whether the last word should to the following proverb should be party or country.
Input of a 1 will result in the word party. Any other number will result in a output of country.
*/

#include <iostream>
#include <string>
using namespace std;

void writeProverb();

int main()
{
    int wordCode;

    cout << "Given the phrase:" << endl;
    cout << "Now is the time for all good men to come to the aid of their___" << endl;
    cout << "Input any other number for the word country" << endl;
    cin >> wordCode;
    cout << endl;
    writeProverb(wordCode);
    return 0;
}

void writeProverb(int choice)
{
    cout << "Now is the time for all good men to come to the aid of their ";
    if(choice == 1)
        cout << "party" << endl;
    else
        cout << "country" << endl;
}