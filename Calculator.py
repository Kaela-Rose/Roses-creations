"""Mikaela-Rose Porter

program stuffs

"""
import math

#this function recieves two numbers as parameters and returns the sum
def add(num1, num2):
    sum = num1 + num2
    return sum

#this function recieves two numbers as parameters and returns the difference
def subtract(num1, num2):
    difference = num1 - num2
    return difference

#this function recieves two numbers as parameters and returns the product 
def multiply(num1, num2):
    product = num1 * num2
    return product

#this function recieves two numbers as parameters and returns the quotient
def divide(num1, num2):
    quotient = num1/num2
    return quotient

#this function recieves a numbers as a parameter and returns the square root of a number
def square_root(number):
    return math.sqrt(number)

#this function recieves two numbers as parameters and returns base number raised to the exponent
def powertothePeople(mybase, myexp):
    answer = mybase ** myexp
    return answer

def printMenu():
    Menu = """Select from the following:
        1. Add
        2. Subtract
        3. Multiply
        4. Divide
        5. Square root
        6. Raise to a Power
        9. Exit
        """
    print(Menu)

def main():
    choice = 0
    while choice != 9:
        printMenu()
        choice = int(input("Which operation do you want to do? "))
        if choice == 1:
            num1 = float(input("Enter the first number to add: "))
            num2 = float(input("Enter the second number to add: "))
            adding = add(num1, num2)
            print(f"The sum of {num1} and {num2} is {adding}")
        elif choice == 2:
            num1 = float(input("Enter the first number to subtract: "))
            num2 = float(input("Enter the second number to subtract: "))
            subtracting = subtract(num1, num2)
            print(f"The difference of {num1} and {num2} is {subtracting}")
        elif choice == 3:
            num1 = float(input("Enter the first number to multiply: "))
            num2 = float(input("Enter the second number to multiply: "))
            Answer = multiply(num1, num2)
            print ("The product of", num1, "and", num2, "is ", Answer)
        elif choice == 4:
            num1 = float(input ("enter the dividend: "))
            num2 = float(input ("enter the divisor: "))
            Quotient = divide(num1, num2)
            print (f"{num1} divided by {num2} is {Quotient:0.2f}")
        elif choice == 5:
            number = int(input("enter a number to find the square root of "))
            SquareRoot = square_root(number)
            print(f"The square root of {number} is {SquareRoot:0.2f}")
        elif choice == 6:
            mybase = int(input("Enter the base: "))
            mypow = int(input("Enter the power: "))
            Power = powertothePeople(mybase, mypow)
            print(f"The result of {mybase} raised to {mypow} is {Power:0.2f}")
        elif choice == 9:
            print("Thank you for using this calculator")
            break
        else:
            print("Invalid entry")
    

main()
