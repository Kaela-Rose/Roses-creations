//Mikaela-Rose Porter
/*
This program takes two numbers (payRate & hours) and multiplies them to get grossPay.
It then calculates net pay by subtracting 15%
*/

#include <iostream>
#include <iomanip>
using namespace std;

void printDescription();
void computePayCheck(float, int, float&, float&);

int main()
{
    float payRate;
    float grossPay;
    float netPay;
    int hours;

    cout << setprecision(2) << fixed;
    cout << "Welcome to the Pay Roll Program" << endl;

    printDescription(); //Call to description function

    cout << "Please input the pay per hour" << endl;
    cin >> payRate;

    cout << endl << "Please input the number of hours worked" << endl;
    cin >> hours;
    cout << endl << endl;

    computePayCheck(payRate, hours, grossPay, netPay);

    cout << "The gross pay is $" << grossPay;
    cout << "The net pay is $" << netPay << endl;

    cout << "We hope you enjoyed this program" endl;

    return 0;
}

void computePayCheck(float payRate, int hours, float & grossPay, float & netPay)
{
    grossPay = payRate * hours;
    netPay = grossPay * 0.85;
}
