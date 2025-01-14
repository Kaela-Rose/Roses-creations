//Mikaela-Rose Porter
/*  Purpose: The system should start with a balance of $1000. It should repeatedly display a menu
where the user can choose to deposit, withdraw, check balance, or exit.
Algorithm:
1. Include iostream and using namespace std
2. Define main
3. Define deposit, withdraw, balance, and menuOption
4. Set the balance to 1000
5. Output the menu a.) Deposit b.) Withdraw c.) Check Balance
6. Ask user to input their choice
7. Use the menu option for each choice while using if/else statements
8. Menu option 1 will be deposit a. Balance += Deposit;
9. Menu option 2 will be withdraw
10. Menu option 3 will be to check current balance
11.  Menu option 4 will be to exist the program
12. Return 0
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double balance, deposit, withdrawl;
    int menuOption;

    balance = 1000.00;

    while(menuOption != 4)
    {
        cout << "Welcome to the ATM!" << endl;
        cout << "1. Deposit Money \n";
        cout << "2. Withdraw Money \n";
        cout << "3. Check Balance \n";
        cout << "4. Exit \n";
        cout << "Please select a menu option (1-4): ";
        cin >> menuOption;

        if(menuOption == 1)
        {
            cout << "Enter the amount to deposit: ";
            cin >> deposit;
            balance += deposit;
            cout << "Deposit successful. New Balance: $" << balance << endl;
        }
        else if (menuOption == 2)
        {
            cout << "Enter the amount to withdraw: ";
            cin >> withdrawl;
            balance -= withdrawl;
            cout << "Withdrawal successful. New Balance: $" << balance << endl;
        }
        else if (menuOption == 3)
        cout << "Current balance: $" << balance << endl;

        else
            cout << "Thank you for using the ATM!" << endl;
        
        break;
    }


return 0;
}