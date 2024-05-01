#Mikaela-Rose Porter
""" This program calculates the area and perimeter of a rectangle.
Algorithm:
 1.) Define area function
        a) This function should take two parameters: length and width.
        b) Inside the function, calculate the area by multiplying length by width.
        c) Return the calculated area from this function.
 2.) Define the perimeter Function
        a) This function should also take two parameters: length and width.
        b) Inside the function, calculate the perimeter using the formula 2 * (length + width).
        c) Return the calculated perimeter from this function.
 3.) Define a function named main.
        a) prompt the user to input the length and width of a rectangle.
        b) get user input and convert the values to integers or floats as needed.
Call the area function with length and width as arguments and store the result in a variable.
Call the perimeter function with length and width as arguments and store the result in a separate variable.
Print the calculated area and perimeter with descriptive messages.
"""

#calculate the area of a rectangle
def area(length, width):
    return length * width

#calculate the perimeter of a rectangle
def perimeter(length, width):
    return 2 * (length + width)

def main():
    length = float(input("Enter the length of the rectangle: "))
    width = float (input("Enter the width of the rectangle: "))

    #calculate the area and perimeter
    rectangle_area = area(length, width)
    rectangle_perimeter = perimeter(length, width)

    print("The area of the rectangle is:", rectangle_area)
    print("The perimeter of the rectangle is:", rectangle_perimeter)

main()
