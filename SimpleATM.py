#Mikaela-Rose Porter
"""It should repeatedly display a menu where the user can choose to deposit,
withdraw, check balance, or exit. Use a while loop to keep the
menu displaying until the user chooses to exit. Initial balance $1000
Ensure to update the balance accordingly on each deposit or withdrawal.
Algorithm:
1. Initialize the balance to $1000
2. Display the menu
3. Take user choice
4. Do the math and show the new balance with a message
    a) for deopsits add to current balance
    b) for widthdrawls, subtract from current balance
    c) for check balance simple display with a message
5. When the user selects quit, display a goodbye message
"""
import math
Balance = 1000.00

print("Menu Options: \n 1. Deposit Money \n 2. Widthdraw Money \n 3. Check Balance \n 4. Exit")
Choice = int(input("Select a menu option(1,2,3, or 4): "))
while (Choice >=1 and Choice<5):
    if (Choice == 1):
        Deposit = float(input("Enter the amount to deposit: "))
        Balance += Deposit
        print("Deposit successful.\n New Balance: ", round(Balance, 2))
        print("Menu Options: \n 1. Deposit Money \n 2. Widthdraw Money \n 3. Check Balance \n 4. Exit")
        Choice = int(input("Select a menu option(1,2,3, or 4): "))
    elif (Choice == 2):
        Widthdrawl = float(input("Enter the amount to widthdraw: "))
        Balance -= Widthdrawl
        print("Withdrawal successful.\n New Balance: ", round(Balance, 2))
        print("Menu Options: \n 1. Deposit Money \n 2. Widthdraw Money \n 3. Check Balance \n 4. Exit")
        Choice = int(input("Select a menu option(1,2,3, or 4): "))
    elif (Choice == 3):
        print("Your current balance is ", round(Balance, 2))
        print("Menu Options: \n 1. Deposit Money \n 2. Widthdraw Money \n 3. Check Balance \n 4. Exit")
        Choice = int(input("Select a menu option(1,2,3, or 4): "))
    elif (Choice == 4):
       print("Have a nice day. Thank you for visiting this ATM.")
    break 
else:
    print("Invalid entry")
        

