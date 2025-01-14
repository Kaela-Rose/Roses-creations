//Mikaela-Rose Porter

#include <iostream>
#include <string>
using namespace std;

const string FAVORITEPOP = "Jaritos";
const char BESTRATING = 'A';

int main()
{
    char rating;        //2nd highest product
    string favoriteSnack;      //most preferred snack
    int numberOfPeople;     // the number of people in the survey
    int topChoiceTotal;     // the number of people who prefer the top choice

    rating = 'B';
    favoriteSnack = "Crackers";
    numberOfPeople = 250;
    topChoiceTotal = 148;

    cout << "The preferred pop is " << FAVORITEPOP << endl;
    cout << "The preferred snack is " << favoriteSnack << endl;
    cout << "Out of " << numberOfPeople << " people " << topChoiceTotal 
    << " chose these items!" << endl;
    cout << "Each of these products were given a rating of " << BESTRATING;
    cout << " from our expert tasters" << endl;
    cout << "The other products were rated no higher than a " << rating << endl;
    
    return 0;
}