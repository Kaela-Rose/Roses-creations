#include <iostream>
using namespace std;

int main ()
{
    cout « "Welcome to my Pyramid program !" « endl;
    cout « "please enter the desired height of the pyramind" « endl; 
    cin > UserChoice;
    for (int i = 1; i <= UserChoice; i ++) // i represents the row number
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j ;
        
        }
        cout << endl;
    }
    return 0;
}