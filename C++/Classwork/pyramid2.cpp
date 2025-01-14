//Mikaela-Rose Porter

#include <iostream>
using namespace std;

int main()
{
    int row
    //int col;
    cout << "how many rows? " << endl;
    cin >> row;
    for(int ct1 = 1; ct1 <= row; ct1++)
    {
        for(int ct2 = 1; ct2 <= ct1; ct2++)
        {
            cout << ct2;
        }
        cout << endl;
    }

    return 0;
}