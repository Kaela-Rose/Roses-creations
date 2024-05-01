#Mikaela-Rose Porter
"""
GRATUITY: Tip calculation- based on a total bill amount, this computes an 18%
tip rounded up to the nearest whole cent (2 decimal places) and
returns the tip amount and the new total bill.
add comments for each function.
"""
import math

def print_menu():
    print("Menu Options: ")
    print("1. Distance: Kilimeter to Miles")
    print("2. Temperature: C to F")
    print("3. Calculate Tip")
    print("4. Discount Sale")
    print("5. Pounds to Kilograms")
    print("6. Leave the program")

def calculateTip():
    TotalBill = float(input("How much was your bill? "))
    Tipamount = (TotalBill * 0.18)
    TipAmount = round(Tipamount, 2)
    return Tipamount, TotalBill

def Temperature():
    Celsius = float(input ("enter a celsius Temperature"))
    Fahr = 9/5 * Celsius + 32
    return Fahr

def Distance():
    Kilos = float (input ("what the distance in Kilometers"))
    Miles = Kilos * .62
    return Miles

def Discount_Price():
    Initial price = float (input ("Input an initial price"))
    DiscAnt = float(input ("What perceent discount?"))

def Pounds_to_Kilos():
    Weight_In_Pounds = float(input("enter a weight in pounds "))
    Weight_In_Kilos = Weight_In_Pounds / 2.2
    return Weight_In_Kilos


def main():
    choice = 0
    while choice != 6:
        print_ menu()
        choice = int(input(" what would you like to do?"))
        if choice == 1:
            Dis = Distance()
            print ("The converted distance is", Dis)
        elif choice == 2:
            Tem = Temperature()
            print ("the temperature in Farhenheit is ", Tem)
        elif choice = 3:
            Tot, Tip = Calculate_Tips ()
            print(f"The bill was (Tot) and the tip was {Tip}")
        elif choice = 4:
            SaleAnount = Discount_ Price()
            print("The sale price is ", SaleAmount)
        elif choice = 5:
            Kilos = Pounds_to_Kilograms ()
            print("The amount in kilograms is ", Kilos)
        elif choice = 6:
            print("Thank you for using my program!!!!;")
    
