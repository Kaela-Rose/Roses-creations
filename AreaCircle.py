#Mikaela-Rose Porter

"""
This is a program to compute the area of a circle given the radius
Algorithm:

1. Area of a circle = 3.14 * Radius ** 2
2. Get radius from the user
3. Get radius using formula above
4.Output the result
"""

from math import pi
radius = int(input("Please enter the radius of the circle "))
area = pi * radius**2

print("The area is ", area, "units squared")
