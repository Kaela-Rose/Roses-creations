//Mikaela-Rose Porter
/*a program that asks how many tickets for each class of seats were sold, then displays 
the amount of income generated from ticket sales. 
Format your dollar amount in a fixed-point notation with two decimal points and 
make sure the decimal point is always displayed. 
*/

#include <iostream>
#include <iomanip> // for setting decimal precision

using namespace std;

int main() {
    // Define constants for ticket prices
    const double CLASS_A_PRICE = 15.00;
    const double CLASS_B_PRICE = 12.00;
    const double CLASS_C_PRICE = 9.00;

    // Variables to hold the number of tickets sold for each class
    int ticketsB, ticketsB, ticketsC;

    // Ask user for the number of tickets sold for each class
    cout << "Enter the number of Class A tickets sold: ";
    cin >> ticketsA;

    cout << "Enter the number of Class B tickets sold: ";
    cin >> ticketsB;

    cout << "Enter the number of Class C tickets sold: ";
    cin >> ticketsC;

    // Calculate income for each class
    double incomeA = ticketsA * CLASS_A_PRICE;
    double incomeB = ticketsB * CLASS_B_PRICE;
    double incomeC = ticketsC * CLASS_C_PRICE;

    // Calculate total income
    double totalIncome = incomeA + incomeB + incomeC;

    // Display the income generated, formatted to two decimal places
    cout << fixed << setprecision(2); // Ensures 2 decimal places in output
    cout << "Income generated from Class A tickets: $" << incomeA << endl;
    cout << "Income generated from Class B tickets: $" << incomeB << endl;
    cout << "Income generated from Class C tickets: $" << incomeC << endl;
    cout << "Total income generated: $" << totalIncome << endl;

    return 0;
}
