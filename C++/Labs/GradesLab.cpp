//Mikaela-Rose Porter
// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

#include <iostream> 
using namespace std;

int main()
{
    float grade;
    char Letter;

    cout << "Input your grade: " << endl;
    cin >> grade;

    if (grade >= 90)
        Letter = 'A';

    else if (grade >= 80)
        Letter = 'B';

    else if (grade >= 70)
        Letter = 'C';

    else if (grade >= 60)
        Letter = 'D';

    else
        Letter = 'F';

    switch(Letter)
    {
    case 'A': 
        cout << "an A - excellent work !" << endl; 
        break;

    case 'B': 
        cout << "you got a B - good job" << endl;
        break;

    case 'C': 
        cout << "earning a C is okay I guess" << endl; 
        break;

    case 'D': 
        cout << "You got a D...maybe a tutor is needed" << endl; 
        break;
    

    case 'F': 
        cout << "you failed - better luck next time" << endl ;
        break;

    default: 
        cout << "You did not enter an A, B, C, D, or F" << endl;
    }


    return 0;
}
