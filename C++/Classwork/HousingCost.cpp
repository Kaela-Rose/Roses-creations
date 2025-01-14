/* Mikaela-Rose Porter
Purpose: A program that asks the user to enter their monthly costs for each of the following housing-related expenses:
rent or mortgage payment, utilities, phones, cable, internet service. The program should then display the total monthly cost of these expenses, 
the total annual cost of these expenses, and the projected cost of inflation (5%) for the next annual year.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double rentMortgageCost, utilitiesCost, phoneBill, cableCost, internetCost;
    double monthlyCost, annualCost, inflationCost;
    const double inflationRate = 0.05;

    cout << "Enter your monthly mortgage or rent cost: ";
    cin >> rentMortgageCost;
    
    cout << "Enter your monthly utilities cost: ";
    cin >> utilitiesCost;
    
    cout << "Enter your monthly phone bill cost: ";
    cin >> phoneBill;
    
    cout << "Enter your monthly cable cost: ";
    cin >> cableCost;
    
    cout << "Enter your monthly internet service cost: ";
    cin >> internetCost;

    // Calculate total monthly cost
    monthlyCost = rentMortgageCost + utilitiesCost + phoneBill + cableCost + internetCost;

    // Calculate total annual cost
    annualCost = monthlyCost * 12;

    // Calculate projected total cost with inflation
    inflationCost = annualCost * (1 + inflationRate);

    // Formatting output
    cout << fixed << setprecision(2);  // Ensure two decimal places

    // Display monthly costs
    cout << "\nTotal Monthly Costs:\n";
    cout << "-----------------------------------\n";
    cout << "Rent/Mortgage Payment:    $" << setw(8) << rentMortgageCost << endl;
    cout << "Utilities:                $" << setw(8) << utilitiesCost << endl;
    cout << "Phones:                   $" << setw(8) << phoneBill << endl;
    cout << "Cable:                    $" << setw(8) << cableCost << endl;
    cout << "Internet Service:         $" << setw(8) << internetCost << endl;
    cout << "Total Expenses:           $" << setw(8) << monthlyCost << endl;

    // Display annual costs
    cout << "\nTotal Annual Costs:\n";
    cout << "-----------------------------------\n";
    cout << "Rent/Mortgage Payment:    $" << setw(8) << rentMortgageCost * 12 << endl;
    cout << "Utilities:                $" << setw(8) << utilitiesCost * 12 << endl;
    cout << "Phones:                   $" << setw(8) << phoneBill * 12 << endl;
    cout << "Cable:                    $" << setw(8) << cableCost * 12 << endl;
    cout << "Internet Service:         $" << setw(8) << internetCost * 12 << endl;
    cout << "Total Expenses:           $" << setw(8) << annualCost << endl;

    // Display projected costs with inflation
    cout << "\nProjected Total Annual Costs for 2025 (with 5% inflation rate):\n";
    cout << "-------------------------------------------------------------------------\n";
    cout << "Rent/Mortgage Payment:    $" << setw(8) << rentMortgageCost * 12 * (1 + inflationRate) << endl;
    cout << "Utilities:                $" << setw(8) << utilitiesCost * 12 * (1 + inflationRate) << endl;
    cout << "Phones:                   $" << setw(8) << phoneBill * 12 * (1 + inflationRate) << endl;
    cout << "Cable:                    $" << setw(8) << cableCost * 12 * (1 + inflationRate) << endl;
    cout << "Internet Service:         $" << setw(8) << internetCost * 12 * (1 + inflationRate) << endl;
    cout << "Total Expenses:           $" << setw(8) << inflationCost << endl;

    return 0;
}
