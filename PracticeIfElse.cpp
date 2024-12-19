//Mikaela-Rose Porter

#include <iostream>
using namespace std;

int main()
{
    double a, b, c, x, y, z, amount1, amount2, speed, points;
//statement assigns 20 to y and 40 to x if x > 100.
    cout << "Enter a value for x: ";
    cin >> x;
    if(x > 100)
    {
        y = 20;
        z = 40;
    }

    //statement assigns 0 to b and 1 to c if a < 10.
    cout << "Enter a value for a: ";
    cin >> a;
    if(a < 10)
    {
        b = 0;
        c = 1;
    }

    //statement that assigns 0 to the variable b if the variable a is less than 10; otherwise
    cout << "Enter a value for a: ";
    cin >> a;
    if(a < 10)
        b = 0;
    else
        b = 99;

    //if amount1 is greater than than 10 and amount2 is less than 100, display the greater of amount1 and amount2
    cout << "Enter a value for amount1 and amount2: ";
    cin >> amount1, amount2;
    if(amount1 > 10 && amount2 < 100)
    {
        if(amount1 > amount2)
        {
            cout << amount1;
            break;
        }
        if(amount1 > amount2)
        {
            cout << amount2;
            break;
        }
    }
    else
    break;

    //statement that displays the speed is normal if the speed is in between the range of 24 to 56.
    cout << "Please enter the Speed: ";
    cin >> speed;
    if(speed > 24 && speed < 56)
        cout << "Speed is normal";
    else
        cout << "Speed is abnormal";
    

    //statement that deterimines whether the points are outside the range of 9 to 51.
    cout << "Please enter your amount of points: ";
    cin >> points;
    if(points < 9 && points > 51)
        cout << "Invalid points";
    else
        cout << "Valid points";


}