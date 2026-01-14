#Mikaela-Rose Porter
""" A Python program that uses a menu and functions that compute area and perimeter or area and circumference.
Algorithm:

1) Import the math library (for π and square roots).
2) Define functions for each shape:
    Rectangle function:
        Ask the user for length and width.
        Compute area = length * width.
        Compute perimeter = 2 * (length + width).
        Display area and perimeter.
    Circle function:
        Ask the user for radius.
        Compute area = π * radius².
        Compute circumference = 2 * π * radius.
        Display area and circumference.
    Hexagon function:
        Ask the user for side length.
        Compute area = (3√3 / 2) * side^2.
        Compute perimeter = 6 * side.
        Display area and perimeter.
    Pentagon function:
        Ask the user for side length.
        Compute area = (1/4) * √(5 * (5 + 2√5)) * side^2.
        Compute perimeter = 5 * side.
        Display area and perimeter.
3) Main menu loop:
        Repeat until the user chooses to quit:

        Display menu options:
        1 → Rectangle
        2 → Circle
        3 → Hexagon
        4 → Pentagon
        5 → Quit

4) Ask the user for their choice.
        If choice = 1 → call Rectangle function.
        If choice = 2 → call Circle function.
        If choice = 3 → call Hexagon function.
        If choice = 4 → call Pentagon function.
        If choice = 5 → print exit message and end loop.
        Otherwise → print “Invalid choice.”
5) End program.
"""

import math 

# Function for rectangle
def rectangle():
    length = float(input("Enter the length of the rectangle: "))
    width = float(input("Enter the width of the rectangle: "))
    area = length * width
    perimeter = 2 * (length + width)
    print("The area of the rectangle is", round(area, 2))
    print("The perimeter of the rectangle is", round(perimeter, 2))

# Function for circle
def circle():
    radius = float(input("Enter the radius of the circle: "))
    area = math.pi * radius ** 2
    circumference = 2 * math.pi * radius
    print("The area of the circle is", round(area, 2))
    print("The circumference of the circle is", round(circumference, 2))    

# Function for hexagon
def hexagon():
    side = float(input("Enter the side length of the hexagon: "))
    area = (3 * math.sqrt(3) / 2) * side ** 2
    perimeter = 6 * side
    print("The area of the hexagon is", round(area, 2))
    print("The perimeter of the hexagon is", round(perimeter, 2))

# Function for pentagon
def pentagon():
    side = float(input("Enter the side length of the pentagon: "))
    area = (1/4) * math.sqrt(5 * (5 + 2 * math.sqrt(5))) * side ** 2
    perimeter = 5 * side
    print("The area of the pentagon is", round(area, 2))
    print("The perimeter of the pentagon is", round(perimeter, 2))

# Main menu loop
def menu():
    while True:
        print("\nMenu:")
        print("1. Rectangle")
        print("2. Circle")
        print("3. Hexagon")
        print("4. Pentagon")
        print("5. Quit")

        choice = input("Enter your choice (1-5): ")
        
        if choice == "1":
            rectangle()
        elif choice == "2":
            circle()
        elif choice == "3":
            hexagon()
        elif choice == "4":
            pentagon()
        elif choice == "5":
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please enter 1-5.")

# Run the menu
menu()