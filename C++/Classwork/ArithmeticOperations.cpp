//Mikaela-Rose Porter

#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    double tax, tip, mealCharge, calculatedTax, calculatedTip, totalCost;
    tax = 0.0675; //6.75 percent
    tip = 0.15;  // 15 percent

    cout << setprecision(2) << fixed;
    cout << "Enter the cost of your meal: ";
    cin >> mealCharge;
    calculatedTax = tax * mealCharge;
    calculatedTip = tip * mealCharge;
    totalCost = calculatedTax + calculatedTip;
    cout << "The total cost for your mean is $" << totalCost << " with a tax of $" << calculatedTax << " and a tip of $" << calculatedTip;

    return 0;
}