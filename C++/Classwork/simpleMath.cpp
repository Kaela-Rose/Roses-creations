/* Mikaela-Rose Porter
This is a program that performs arithmetic operations and displays the problems and solutions.
*/

#include <iostream>
using namespace std;

int main()
{ 
        int num, num2, num3, num4, num5, num6, num7, num8;
        int Add, Subt, Mult, Divs;

        cout << "Please enter a number: ";
        cin >> num;
        cout << "Please enter a number: ";
        cin >> num2;
        Add = num + num2;
        cout << "Math problem #1: " << num << " + " << num2 << " = " << Add << endl;

        cout << "Please enter a number: ";
        cin >> num3;
        cout << "Please enter a number: ";
        cin >> num4;
        Subt = num3 - num4;
        cout << "Math problem #2: " << num3 << " - " << num4 << " = " << Subt << endl;

        cout << "Please enter a number: ";
        cin >> num5;
        cout << "Please enter a number: ";
        cin >> num6;
        Mult = num5 * num6;
        cout << "Math problem #3: " << num5 << " * " << num6 << " = " << Mult << endl;

        cout << "Please enter a number: ";
        cin >> num7;
        cout << "Please enter a number: ";
        cin >> num8;
        Divs = num7 / num8;
        cout << "Math problem #4: " << num7 << " / " << num8 << " = " << Divs << endl;

        cout << endl;
        return 0;
}