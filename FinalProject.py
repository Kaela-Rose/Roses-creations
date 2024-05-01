#Mikaela-Rose Porter
"""A hat vending machine program that allows the user to select and buy
options from the collection.
Algorithm:
1.) import math and counter so that both forms of methods can be used
2.) Initialize Hat Inventory and Prices:
    -Create dictionaries HatsAmount and HatsPrice to store the inventory and
    prices of hats.
3.) Define the display_menu() function to print out the available hats and their stock.
4.) Implement the selection() function to allow the user to select hats
by inputting their choice until they enter "Q" to quit.
    -Append each selected hat along with its price to the Receipt list.
5.) Define the calculate_total() function to compute the subtotal,
sales tax, and total amount based on the items in the Receipt.
6.) Implement the payingOptions() function to prompt the user to enter the
payment amount.
- If the payment is less than the total, display an error message and
prompt for a sufficient amount.
- If the payment is equal to the total, print "No change due."
- If the payment exceeds the total, calculate the change due and dispense the
change in appropriate denominations.
7.) Define the dispense_change() function to calculate and print the
denominations of dollars and coins to be dispensed as change.
8.) Modify the print_receipt() function to display the purchased items, their
prices, subtotal, sales tax, and total amount.
9.) Define the main() function to orchestrate the entire process: Display the menu.
 -Allow the user to select hats. Calculate the total. Process payment. Print the
final receipt with the purchased items and quantities.
-After the transaction is completed, print a thank you message along with a
final purchase list showing the quantity of each item bought.
"""
#importing math and counter so that both forms of methods can be used
import math
from collections import Counter

#Initializing the amount of hats in a dictionary
HatsAmount = {"Beanie": 4, "Cowboy Hat": 4, "Snapback": 4, "Bucket Hat": 3,
              "Beach Hat": 3, "Beret": 4, "Bonnet": 4, "Scarf": 3}

#Initializing the pric of hats in a dictionary
HatsPrice = {"Beanie": 10.00, "Cowboy Hat": 50.00, "Snapback": 35.00, "Bucket Hat": 20.00,
             "Beach Hat": 14.00, "Beret": 15.00, "Bonnet": 4.00, "Scarf": 5.00}
#Initializing the recipt list to be empty
Receipt = []
SalesTax = 7.4  #Sales tax for Georgia is 7.4%

#This function displays the menu and the amount that is in stock
def display_menu():
    print("**********************************************************")
    print("Welcome to the Happy Hat Machine! Here's our selection: ")
    print("**********************************************************")
    for item, stock in HatsAmount.items():
        print(item, "- Stock:", stock)

#asks the user to select an option from the menu until a sentinal value is entered
def selection():
    while True:
        Choice = input("Please select a hat (Q to quit): ").title()
        if Choice == "Q":
            break
        elif Choice in HatsPrice:
            print("You selected a", Choice, "- $", HatsPrice[Choice])
            Receipt.append((Choice, HatsPrice[Choice]))
        else:
            print("Invalid selection. Please choose from the menu.")

#calculates the total from the selected options
def calculate_total(Receipt):
    subtotal = sum(item[1] for item in Receipt)
    tax_amount = (subtotal * SalesTax) / 100
    total = subtotal + tax_amount
    return subtotal, tax_amount, total


#prints the user's receipt with all of their selections and the total due
def print_receipt(subtotal, tax_amount, total):
    print("\n--- Receipt ---")
    for item, price in Receipt:
        print(item, "- Price: ${:.2f}".format(price))
    print("\nSubtotal: ${:.2f}".format(subtotal))
    print("Sales Tax ({}%): ${:.2f}".format(SalesTax, tax_amount))
    print("Total: ${:.2f}".format(total))

#Allows the user to enter the amount they want to pay in whole dollars
def payingOptions(total, Receipt):
    subtotal, tax_amount, _ = calculate_total(Receipt)
    print_receipt(subtotal, tax_amount, total)

    while True:
        payment = input("\nEnter the amount you want to pay: $")
        try:
            payment = float(payment)
            if payment < total:
                print("Insufficient payment. Please enter an amount equal to or greater than the total.")
            elif payment == total:
                print("No change due.")
                break
            else:
                change_due = payment - total
                print("Change due: ${:.2f}".format(change_due))
                dispense_change(change_due)
                break
        except ValueError:
            print("Invalid input. Please enter a valid dollar amount.")

#Depending of the amount of money the user enters the program will calculate and dispense the right amount of change
def dispense_change(change_due):
    dollars = int(change_due)
    change_due -= dollars
    cents = int(change_due * 100)

    denominations = { 100: "hundred-dollar bill", 50: "fifty-dollar bill", 20: "twenty-dollar bill", 10: "ten-dollar bill",
        5: "five-dollar bill", 1: "one-dollar bill", 0.25: "quarter", 0.10: "dime", 0.05: "nickel", 0.01: "penny"}

    print("\nDispensing change:")
    for value, name in denominations.items():
        if dollars >= value or (value < 1 and cents >= value * 100):
            count = dollars // value if value >= 1 else cents // int(value * 100)
            dollars -= count * value if value >= 1 else count * int(value * 100) / 100
            cents -= count * int(value * 100) if value < 1 else 0
            print("{} {}{}".format(count, name, "s" if count != 1 else " "), end=", " if value >= 1 else "")
    print()

#Runs the functions in the main program
def main():
    display_menu()
    selection()
    total = calculate_total(Receipt)[-1]
    payingOptions(total, Receipt)
    print("\nThank you for shopping with the Happy Hat Machine! Here's your final purchase list:")
    #Using the counter dictionary subclass so that it can count the objects in th reciept.
    for item, quantity in Counter(item for item, _ in Receipt).items():
        print("- {} (Quantity: {})".format(item, quantity))

#runs the entire program    
main()
