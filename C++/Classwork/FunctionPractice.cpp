//Mikaela-Rose Porter

#include <iostream>
#include <cmath>
using namespace std;

void allTheSame(int X, int Y, int Z)
{
    bool Status;

    if(X == Y && X == Z)
    {
        Status = true;
        cout << Status << endl;
    }
    else
        Status = false;
}

int main()
{
    int num1, num2, num3;
    
    int answerNum;
    bool answerBool;

    cout << allTheSame(3, 4, 5) << endl;
    answerBool = allTheSame(5, 5, 5);
    cout << "The answer is " << answerBool << endl;
}